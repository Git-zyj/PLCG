/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12966
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_1)));
    var_20 = ((/* implicit */long long int) var_15);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 8; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        var_22 = (-(((((/* implicit */_Bool) arr_5 [i_1] [i_2 + 2] [i_3])) ? (((((/* implicit */int) var_16)) | (((/* implicit */int) var_18)))) : (((/* implicit */int) (unsigned char)170)))));
                        arr_10 [i_0] [i_1] [i_0] [(unsigned short)7] = ((/* implicit */unsigned long long int) (unsigned char)92);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
        {
            for (signed char i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_13 [i_0] [i_0])) ? (((/* implicit */int) arr_19 [i_0] [i_6] [i_0])) : (-49941960)))))) == (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0] [9ULL]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_4] [i_6] [i_6]))) % (var_8)))))));
                        arr_21 [i_6] [i_4] [i_4] [i_4] = ((/* implicit */long long int) min((((/* implicit */int) arr_9 [i_5] [i_4] [i_5] [i_6] [i_5] [i_5])), (((((9399206883954127456ULL) <= (((/* implicit */unsigned long long int) arr_16 [i_4])))) ? (max((((/* implicit */int) arr_1 [i_0] [i_0])), (-1325902879))) : (((/* implicit */int) ((1918310408) != (((/* implicit */int) arr_5 [i_6] [i_0] [i_0])))))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        arr_26 [i_4] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) + (2147483647))) >> (((((/* implicit */_Bool) arr_13 [i_0] [i_4])) ? (((/* implicit */int) arr_20 [i_0] [i_5])) : (((/* implicit */int) arr_25 [i_7]))))))) <= (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_4] [i_4])) | (((/* implicit */int) arr_8 [i_0] [i_4]))))), (var_8)))));
                        /* LoopSeq 3 */
                        for (long long int i_8 = 0; i_8 < 10; i_8 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_4]))));
                            var_25 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) 623998173)) * (9399206883954127436ULL))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)108)) ? (((((/* implicit */_Bool) arr_23 [i_0] [i_7] [i_5] [i_7])) ? (arr_7 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 425400769U)))))))))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 10; i_9 += 2) 
                        {
                            var_26 ^= ((/* implicit */short) max((((((arr_0 [i_7] [(signed char)4]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_4] [i_7]))))) << (((/* implicit */int) (unsigned char)1)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6489468151935053353ULL)) ? (((/* implicit */int) arr_30 [i_0] [i_4] [i_5] [i_0] [i_9] [i_9])) : (((/* implicit */int) arr_5 [i_4] [i_5] [i_9]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_9] [i_7]))))) : (1325902878))))));
                            var_27 = ((/* implicit */signed char) (((~(((/* implicit */int) arr_19 [i_0] [i_9] [i_0])))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_14 [i_0] [i_5] [i_9]))))))));
                        }
                        for (signed char i_10 = 0; i_10 < 10; i_10 += 3) 
                        {
                            var_28 -= arr_3 [i_4];
                            arr_33 [i_0] [i_0] [i_0] [i_0] [i_10] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)51)) - (((/* implicit */int) (signed char)127))));
                        }
                    }
                    arr_34 [4] [4] [i_5] = ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5])))))) | (((((/* implicit */long long int) 4294967293U)) / (arr_11 [i_4])))));
                    var_29 ^= ((/* implicit */signed char) arr_14 [i_0] [i_0] [i_5]);
                }
            } 
        } 
    }
    var_30 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (((~(((/* implicit */int) (unsigned short)27487)))) ^ (((/* implicit */int) min((var_2), (var_13))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)71))) : (var_1))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned char)63))))))));
}
