/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133021
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
    var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)255))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) var_7);
        var_17 ^= var_4;
        arr_3 [(unsigned char)6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) var_7)))));
    }
    /* LoopNest 3 */
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        var_18 += ((/* implicit */unsigned char) 9223372036854775791LL);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 3) 
                        {
                            var_19 += ((/* implicit */_Bool) (+((+(((/* implicit */int) (signed char)-34))))));
                            var_20 = ((/* implicit */unsigned int) min((var_20), (3954636524U)));
                        }
                        arr_16 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((_Bool) arr_15 [i_2] [i_1]));
                        var_21 ^= ((/* implicit */int) ((short) ((arr_13 [i_3] [i_3]) && (((/* implicit */_Bool) (unsigned char)0)))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 3) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_12 [i_1] [i_1])) ? (((/* implicit */int) var_14)) : ((~(((/* implicit */int) var_15))))))));
                        arr_21 [i_1] [i_2] [i_1] [i_6] = ((/* implicit */_Bool) min(((+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)87))) <= (arr_12 [i_1] [i_1])))))), (((/* implicit */int) ((((/* implicit */int) arr_13 [i_1] [i_3])) == (((/* implicit */int) arr_13 [i_1] [i_1])))))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 19; i_7 += 3) /* same iter space */
                    {
                        var_23 += ((/* implicit */_Bool) max((((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (short)-11914))))))), ((~(0U)))));
                        arr_24 [i_1] [i_2] [i_3] [i_2] [i_2] [i_1] = (~(var_0));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 19; i_9 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 340330772U))))), (max((var_0), (3591268357U))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11473))) < (min((((/* implicit */unsigned long long int) var_13)), (11750157215842493304ULL)))))))));
                                arr_30 [i_1] [i_2] [i_1] [i_1] [i_2] = ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned char)179))))) < (((var_13) ^ (((/* implicit */long long int) max((((/* implicit */unsigned int) var_7)), (arr_19 [i_1] [i_2] [i_1] [i_1])))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) min((((((((/* implicit */int) (_Bool)0)) == ((-2147483647 - 1)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (12526755561770634889ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1]))))), (((/* implicit */unsigned long long int) (+((-(585243093U)))))))))));
                    var_26 ^= min((543335213054022323ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-64))) & (-9223372036854775807LL)))) ? (max((-1820453983), ((-2147483647 - 1)))) : (((/* implicit */int) ((5ULL) < (((/* implicit */unsigned long long int) var_11)))))))));
                    var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) var_0))));
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */int) min((var_28), (((((/* implicit */_Bool) (+((-(((/* implicit */int) (signed char)53))))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */int) (unsigned short)30031)) >= (((/* implicit */int) (short)18779)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)243)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : ((-(((/* implicit */int) var_8))))))))));
    var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-27476))) : (var_3))), (((/* implicit */unsigned int) var_15))))) ? (((((/* implicit */int) var_4)) | (min((42746011), (((/* implicit */int) var_4)))))) : (((/* implicit */int) var_2))));
}
