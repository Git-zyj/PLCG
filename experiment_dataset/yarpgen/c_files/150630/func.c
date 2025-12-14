/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150630
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
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */int) var_18)) != (((/* implicit */int) var_5))))), (max((-2014938129), (((/* implicit */int) var_11))))))) > (((((/* implicit */_Bool) ((var_10) / (((/* implicit */long long int) 65535U))))) ? (((/* implicit */unsigned int) ((var_5) ? (var_7) : (((/* implicit */int) (_Bool)1))))) : (4294967295U))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 1; i_2 < 12; i_2 += 4) 
                {
                    arr_9 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) ^ (((((/* implicit */_Bool) var_15)) ? (arr_2 [(short)12] [i_0] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [2U] [(unsigned char)2])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) ((var_2) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))), (max((((/* implicit */signed char) arr_0 [i_0])), (var_3))))))) : (min(((-(var_2))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_10)))))))));
                    arr_10 [(short)1] [(unsigned short)7] [i_2] [6LL] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 7526028772498378051LL)) ? (arr_2 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((2014938105) << (((((/* implicit */int) (unsigned char)3)) - (3)))))))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
                    var_20 = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) (~(arr_7 [12U] [12U] [12U])))) || (((/* implicit */_Bool) arr_1 [i_1] [i_2 + 1]))))));
                    var_21 = ((/* implicit */signed char) (unsigned short)61440);
                }
                var_22 ^= ((/* implicit */signed char) arr_7 [i_0] [i_0] [i_0]);
                var_23 -= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)62358)) >> (((((/* implicit */int) var_0)) - (85)))))) ? (((var_9) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [1LL]))))) : (max((arr_4 [i_0] [(_Bool)1]), (((/* implicit */unsigned int) (signed char)67)))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0] [i_1])) | (((((/* implicit */int) (_Bool)1)) & (var_7))))))));
            }
        } 
    } 
    var_24 *= ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_6))))), (var_3)))) > (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_14)))) / (((/* implicit */int) max((var_17), (var_16))))))));
    var_25 = ((/* implicit */_Bool) 2465628859522459194LL);
    var_26 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (var_2)))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)78)))))), ((-(((/* implicit */int) ((var_12) < (((/* implicit */long long int) ((/* implicit */int) var_3))))))))));
}
