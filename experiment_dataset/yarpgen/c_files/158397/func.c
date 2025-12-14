/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158397
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
    for (signed char i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned int) ((((/* implicit */long long int) max((((/* implicit */int) var_4)), (((int) var_1))))) % (((arr_2 [i_0 - 2]) % (((/* implicit */long long int) ((var_2) ? (((/* implicit */int) var_15)) : (var_6))))))));
            /* LoopSeq 2 */
            for (unsigned short i_2 = 3; i_2 < 20; i_2 += 4) 
            {
                var_17 = ((/* implicit */long long int) var_5);
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) arr_5 [i_2] [i_0 - 4])))));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) ((var_14) && (((/* implicit */_Bool) arr_12 [i_0 - 3] [(signed char)17] [i_2 + 2] [i_3] [i_4 - 1] [i_4]))))) * (((/* implicit */int) ((((/* implicit */int) arr_12 [i_0 - 1] [i_1] [i_2 + 2] [i_4 - 1] [i_4 - 1] [(unsigned short)10])) < (((/* implicit */int) arr_12 [i_0 - 2] [i_0 - 2] [i_2 - 2] [i_4] [i_4 - 1] [i_4])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 1; i_5 < 20; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        {
                            var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */long long int) ((/* implicit */int) var_15))) ^ (arr_2 [i_0]))) : (((/* implicit */long long int) ((var_6) & (var_5))))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) var_7)) | (var_13))))));
                            var_21 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_12)))) ? (((var_6) & (((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) arr_14 [i_0] [(unsigned short)16] [i_2] [i_0 + 2] [i_2 + 1] [i_6] [i_5 + 1])) ? (var_13) : (((/* implicit */int) var_12))))));
                            var_22 = ((/* implicit */signed char) arr_12 [i_0 - 4] [i_1] [i_2] [(_Bool)1] [i_1] [i_6]);
                        }
                    } 
                } 
                var_23 *= ((/* implicit */unsigned long long int) var_15);
                var_24 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) ^ (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_0 + 1] [7LL] [i_0] [i_1] [i_2 - 2] [i_2])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : ((~(((((/* implicit */_Bool) var_9)) ? (arr_6 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))))));
            }
            for (signed char i_7 = 1; i_7 < 20; i_7 += 4) 
            {
                arr_22 [i_1] [i_1] [i_7] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(unsigned short)16])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (signed char)-65)))))));
                var_25 &= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_15 [(unsigned short)16] [i_1] [i_7] [i_0] [i_0] [i_7])), (var_9)))))))) + (((((/* implicit */long long int) ((/* implicit */int) var_7))) ^ (var_3)))));
                /* LoopNest 2 */
                for (long long int i_8 = 3; i_8 < 21; i_8 += 3) 
                {
                    for (signed char i_9 = 0; i_9 < 22; i_9 += 1) 
                    {
                        {
                            var_26 &= ((((((/* implicit */_Bool) var_3)) ? (arr_26 [i_0] [i_0 + 2] [i_0 - 4] [i_0 - 1] [i_0] [i_0 + 2] [i_0 - 4]) : (((/* implicit */long long int) var_6)))) >= (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_26 [i_0] [14] [i_7] [i_7 + 1] [i_8] [i_9] [i_9])))));
                            var_27 = ((/* implicit */unsigned int) arr_18 [i_0] [i_1] [i_7] [i_8] [i_9]);
                            var_28 = ((/* implicit */long long int) max(((signed char)126), (((/* implicit */signed char) (_Bool)1))));
                            var_29 -= arr_15 [i_9] [i_8 - 3] [i_7 + 1] [i_7 + 2] [i_1] [i_0 - 3];
                        }
                    } 
                } 
            }
            var_30 = var_11;
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
        {
            var_31 = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_10 [2LL])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))))))));
            arr_31 [i_0] [i_10] = ((/* implicit */unsigned short) var_12);
            var_32 = ((/* implicit */unsigned int) ((-471149981) & (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_15)) : (var_6)))));
        }
        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2855521738564641827LL)) ? (1360433060) : (((/* implicit */int) (unsigned char)104))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (var_13))))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) (~(arr_10 [i_0])))) ? (((/* implicit */int) ((_Bool) var_2))) : (((/* implicit */int) arr_11 [i_0] [i_0] [13LL] [i_0] [i_0 + 2]))))));
    }
    var_34 = ((/* implicit */_Bool) var_7);
}
