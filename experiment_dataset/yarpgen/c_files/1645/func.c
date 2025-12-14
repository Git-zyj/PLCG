/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1645
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) var_6))))) <= (((/* implicit */int) var_0)))))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        arr_2 [(unsigned char)7] = (~((-(((/* implicit */int) var_1)))));
        var_19 = ((/* implicit */unsigned short) 1400043110);
    }
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        arr_5 [i_1] [i_1] &= (+((-(arr_3 [i_1]))));
        var_20 = (~(1843280200));
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            var_21 = ((/* implicit */signed char) (~(((/* implicit */int) var_5))));
            /* LoopSeq 1 */
            for (unsigned int i_3 = 2; i_3 < 12; i_3 += 4) 
            {
                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) var_2))))))));
                arr_12 [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) ((unsigned char) (!(((/* implicit */_Bool) var_9)))));
                /* LoopSeq 3 */
                for (unsigned short i_4 = 1; i_4 < 15; i_4 += 4) 
                {
                    arr_15 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((_Bool) (+((~(415148650U))))));
                    var_23 += ((/* implicit */_Bool) ((int) (((+(arr_14 [i_1] [i_2] [i_2] [i_3 + 3] [i_4]))) / (((/* implicit */long long int) (+(((/* implicit */int) var_13))))))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 4) /* same iter space */
                {
                    arr_19 [i_1] [i_2] [i_3] [i_3] [i_5] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) 1235754948786143378LL))))))));
                    arr_20 [i_5] [i_5] [i_1] [i_2] [i_2] [i_1] = ((/* implicit */signed char) (unsigned char)71);
                    var_24 ^= ((/* implicit */signed char) (+(((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)82))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))))));
                    var_25 = ((/* implicit */short) ((signed char) 5233300264937609767ULL));
                    arr_21 [(short)15] [i_3] [(unsigned char)14] = ((/* implicit */int) ((signed char) (unsigned char)173));
                }
                for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 4) /* same iter space */
                {
                    arr_26 [i_1] [i_2] [i_3] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) (+((~(var_3)))))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_4)) << (((/* implicit */int) (signed char)14))))))) : ((~(((unsigned long long int) var_7))))));
                    arr_27 [i_1] [i_1] = ((/* implicit */int) (((~((+(var_12))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_4 [i_1]))))) || (((/* implicit */_Bool) ((unsigned int) var_6)))))))));
                }
                var_26 = ((/* implicit */unsigned int) (+(-1703149312)));
                var_27 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))));
            }
            arr_28 [i_1] [i_2] = ((/* implicit */int) (!(((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-25066))))) != (((((/* implicit */_Bool) -1843280200)) ? (17300151166561545158ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
            var_28 = ((/* implicit */unsigned char) ((int) ((long long int) arr_17 [i_1] [i_2])));
        }
        /* vectorizable */
        for (unsigned short i_7 = 4; i_7 < 14; i_7 += 4) 
        {
            var_29 = ((/* implicit */long long int) (-(1843280202)));
            var_30 |= ((/* implicit */long long int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) (_Bool)1))));
            var_31 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_10 [i_1] [i_1] [i_1] [i_7]))))));
        }
        /* vectorizable */
        for (short i_8 = 0; i_8 < 16; i_8 += 1) 
        {
            var_32 ^= ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) (unsigned char)145)) ^ (((/* implicit */int) (short)32154)))));
            var_33 = ((/* implicit */unsigned int) (_Bool)1);
            arr_36 [i_8] = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_17)));
            var_34 = ((/* implicit */long long int) arr_23 [i_1] [i_1] [i_1] [i_8]);
        }
        /* LoopNest 2 */
        for (unsigned int i_9 = 0; i_9 < 16; i_9 += 4) 
        {
            for (unsigned char i_10 = 2; i_10 < 15; i_10 += 3) 
            {
                {
                    var_35 = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) arr_11 [i_10 - 2]))) + (((/* implicit */int) ((arr_39 [i_10 + 1] [i_10 - 2] [i_10 - 2]) <= (((/* implicit */long long int) 1071742674)))))));
                    var_36 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) -331598775)) : (var_3)))))));
                }
            } 
        } 
    }
}
