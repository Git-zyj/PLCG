/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109166
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (1360751446U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)123)))));
        var_18 = ((/* implicit */_Bool) (signed char)112);
        /* LoopSeq 4 */
        for (unsigned int i_1 = 3; i_1 < 8; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                arr_8 [5U] [i_1] [5U] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) arr_0 [i_1])))))));
                var_19 = ((/* implicit */signed char) min((var_19), ((signed char)-126)));
                var_20 = ((/* implicit */unsigned int) arr_6 [(short)9] [i_0] [i_1] [i_2]);
                var_21 = ((/* implicit */int) (!(((((/* implicit */int) (signed char)-123)) == (((/* implicit */int) (signed char)-123))))));
            }
            for (short i_3 = 2; i_3 < 9; i_3 += 3) 
            {
                arr_11 [i_1] = ((/* implicit */unsigned char) ((((unsigned int) arr_4 [i_1])) + (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [4LL] [i_1] [i_3]))))) ? ((+(((/* implicit */int) (signed char)122)))) : (((/* implicit */int) arr_9 [i_3 - 1] [i_1] [i_0]))));
                arr_12 [i_1] [i_1] [(signed char)4] = ((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)123)) ^ (((/* implicit */int) (signed char)-103)))) + ((+(((/* implicit */int) arr_10 [i_0] [i_1] [i_3]))))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_23 = (+(((var_3) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)72))))));
                arr_16 [i_0] [i_1] [i_1] [i_4] = ((/* implicit */unsigned long long int) (-(arr_3 [i_0] [i_1])));
                var_24 = ((((/* implicit */int) arr_2 [i_1] [i_0 + 1] [i_1 - 3])) ^ (((/* implicit */int) var_14)));
                var_25 = ((/* implicit */short) var_4);
            }
            arr_17 [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)123))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_6 [i_0] [i_0] [i_0 - 3] [i_5])))))));
            var_27 = ((/* implicit */long long int) ((((((((/* implicit */int) arr_19 [i_5])) + (2147483647))) << (((((var_6) + (2632044865250055036LL))) - (7LL))))) - ((~(((/* implicit */int) arr_2 [i_5] [i_0] [i_5]))))));
        }
        for (signed char i_6 = 0; i_6 < 11; i_6 += 3) 
        {
            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)72))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)215))) ^ (var_11)))));
            /* LoopNest 2 */
            for (unsigned char i_7 = 2; i_7 < 9; i_7 += 4) 
            {
                for (unsigned char i_8 = 1; i_8 < 7; i_8 += 3) 
                {
                    {
                        var_29 = ((/* implicit */unsigned char) var_14);
                        var_30 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 - 1] [3U] [i_0 - 2]))) != (((-3095629051292191073LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)114)))))));
                    }
                } 
            } 
            var_31 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)123))));
            arr_28 [i_6] [(signed char)8] [(signed char)7] = ((/* implicit */_Bool) ((arr_7 [(signed char)6] [(signed char)6] [i_0] [i_0 - 2]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))));
        }
        for (short i_9 = 4; i_9 < 8; i_9 += 1) 
        {
            arr_31 [i_9] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)25273))));
            var_32 = ((/* implicit */_Bool) 3591868522498012524LL);
            /* LoopNest 2 */
            for (unsigned int i_10 = 0; i_10 < 11; i_10 += 1) 
            {
                for (unsigned long long int i_11 = 2; i_11 < 10; i_11 += 3) 
                {
                    {
                        var_33 = ((/* implicit */_Bool) (-(((3095629051292191073LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)63)))))));
                        var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_19 [(unsigned short)10])) ? (2970052495U) : (var_3))))))));
                        arr_38 [i_11] [i_9] [i_10] [i_9] [i_0] = ((((/* implicit */_Bool) arr_34 [(unsigned short)10] [i_10] [4U] [i_9] [i_0] [1U])) ? (-3095629051292191073LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-34)))))));
                        var_35 = ((((/* implicit */_Bool) arr_32 [i_0] [(unsigned char)1] [i_10] [i_11])) ? (((/* implicit */int) arr_35 [(unsigned char)7] [i_11 + 1] [i_11 - 2] [i_11 - 1])) : (((/* implicit */int) ((_Bool) arr_21 [(signed char)2] [i_0]))));
                        arr_39 [i_9] [i_9] [(short)1] = ((/* implicit */signed char) var_12);
                    }
                } 
            } 
            var_36 = ((/* implicit */unsigned int) ((long long int) (unsigned short)40262));
        }
        var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_0] [i_0])) ? (((-3095629051292191073LL) * (((/* implicit */long long int) ((/* implicit */int) arr_2 [6ULL] [i_0] [i_0]))))) : (((/* implicit */long long int) var_3))));
    }
    var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-123)) ? (((/* implicit */int) (signed char)123)) : ((((-(((/* implicit */int) var_4)))) >> ((((((_Bool)1) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) (signed char)110))))) + (1046665074798071377LL))))))))));
    var_39 -= ((/* implicit */unsigned short) (+((-(((/* implicit */int) (_Bool)1))))));
}
