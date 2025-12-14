/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173484
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_12 [i_4] [i_0] [i_2] [i_0] [i_0] |= (~(max((((/* implicit */long long int) var_7)), (((((/* implicit */_Bool) (unsigned char)22)) ? (-7001871961594884365LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))))))));
                                var_15 += ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)118)) | (((((/* implicit */int) arr_8 [i_4] [i_3] [i_1])) & (((/* implicit */int) (signed char)-1))))))) | (((((/* implicit */_Bool) var_7)) ? (min((var_2), (-1326015202391831191LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_14)) ^ (((/* implicit */int) (signed char)5)))))))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */long long int) min((var_16), ((-(min((arr_3 [i_1 + 1] [i_1 - 3] [i_0]), (((/* implicit */long long int) (signed char)-5))))))));
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    for (signed char i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        {
                            arr_19 [i_1] [i_1] [i_5] [i_5] = ((/* implicit */unsigned short) (+(max((((((/* implicit */_Bool) (signed char)-5)) ? (2016608485363409153LL) : (-8845663346566344669LL))), (5372354737315392571LL)))));
                            var_17 = ((/* implicit */long long int) ((((/* implicit */int) var_1)) != (((/* implicit */int) ((unsigned char) ((signed char) (unsigned short)1023))))));
                            arr_20 [i_1] = ((/* implicit */long long int) ((signed char) (signed char)-5));
                            /* LoopSeq 1 */
                            for (unsigned short i_7 = 0; i_7 < 11; i_7 += 2) 
                            {
                                arr_24 [i_0] [i_1] [i_6] [i_7] = ((/* implicit */signed char) arr_3 [i_5] [i_1] [i_1]);
                                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) ((((/* implicit */int) max((arr_0 [i_0] [i_1 - 2]), (arr_0 [i_0] [i_7])))) > (((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned char)130)))))))));
                            }
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_8 = 2; i_8 < 9; i_8 += 4) 
                {
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) arr_3 [i_0] [(signed char)7] [i_0]))));
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) arr_16 [i_0])))))) ? (((/* implicit */int) arr_0 [4LL] [i_8])) : (((/* implicit */int) arr_14 [(unsigned short)10] [i_1 + 1] [i_1] [(unsigned short)10]))));
                    var_21 = ((/* implicit */signed char) (~((~(((/* implicit */int) (signed char)20))))));
                }
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) -7167123706995228695LL)))) ? (((((/* implicit */_Bool) (signed char)-119)) ? (((/* implicit */int) (signed char)106)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) ((signed char) 9223372036854775807LL))))) : (((/* implicit */int) (signed char)0))));
    var_23 = var_10;
    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (signed char)-99))));
}
