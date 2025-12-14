/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108786
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
    var_19 = ((/* implicit */unsigned long long int) var_12);
    var_20 *= ((/* implicit */unsigned char) var_10);
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        var_21 &= ((/* implicit */short) var_2);
        var_22 ^= ((/* implicit */long long int) (~((~(((/* implicit */int) (short)28701))))));
    }
    for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        var_23 *= (~((-(((/* implicit */int) ((((/* implicit */int) var_17)) > (((/* implicit */int) (short)27495))))))));
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_8 [i_2] [i_2] = ((/* implicit */int) var_4);
            arr_9 [(short)1] [i_2] = ((/* implicit */unsigned char) ((-7572567326468091348LL) <= (((/* implicit */long long int) ((/* implicit */int) ((arr_6 [i_1] [i_1] [i_2]) <= (((/* implicit */unsigned long long int) (-(arr_5 [i_1] [i_2] [i_2]))))))))));
            var_24 += ((/* implicit */short) arr_7 [(short)17]);
        }
        for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            /* LoopNest 3 */
            for (short i_4 = 1; i_4 < 16; i_4 += 1) 
            {
                for (unsigned int i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        {
                            arr_22 [i_4] [i_4] = ((/* implicit */short) var_0);
                            var_25 = ((/* implicit */unsigned int) var_12);
                            arr_23 [i_1] [i_1] [i_1] [i_4] [i_1] = ((/* implicit */unsigned int) arr_13 [1U] [14]);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_7 = 2; i_7 < 16; i_7 += 2) 
            {
                for (long long int i_8 = 2; i_8 < 19; i_8 += 1) 
                {
                    {
                        var_26 -= ((/* implicit */short) ((int) ((((/* implicit */_Bool) -7572567326468091336LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) var_13)) ? (arr_27 [i_8] [i_3] [i_1]) : (((/* implicit */unsigned long long int) arr_24 [i_3])))))));
                        var_27 = ((/* implicit */long long int) (+(((/* implicit */int) (short)28701))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) /* same iter space */
                        {
                            arr_30 [i_9] [16U] [(unsigned char)16] [2] [i_1] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)18516)) ? (((/* implicit */int) var_7)) : (-595759381)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_1] [14LL] [i_1]))) : (var_10)));
                            var_28 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_11 [i_1] [0LL])) : (((/* implicit */int) var_14))))) ? (((/* implicit */long long int) ((var_5) ? (((/* implicit */int) arr_4 [6ULL] [i_1])) : (((/* implicit */int) var_5))))) : (7572567326468091350LL));
                        }
                        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) /* same iter space */
                        {
                            var_29 = ((/* implicit */unsigned char) (~(arr_24 [i_7])));
                            var_30 = ((/* implicit */short) var_6);
                            var_31 = ((((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_7 - 1] [i_7 + 4] [i_7 - 1] [i_8 - 2] [i_8 - 2] [i_10])) || (((/* implicit */_Bool) var_14))))) + (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) -4052973618230683077LL)) ? (((/* implicit */int) arr_19 [i_10] [17LL] [17LL])) : (((/* implicit */int) var_4)))))));
                            arr_33 [i_1] [i_1] [i_10] [(_Bool)1] [(signed char)14] = ((/* implicit */unsigned int) ((int) (+(((/* implicit */int) var_6)))));
                            var_32 = ((/* implicit */unsigned char) (short)28701);
                        }
                    }
                } 
            } 
            var_33 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-1)) || (((/* implicit */_Bool) 2579631638U))));
        }
    }
    var_34 = ((/* implicit */unsigned long long int) var_8);
    var_35 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_9))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (!(((((/* implicit */_Bool) -8319140140884657390LL)) && (var_0))))))));
}
