/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123573
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
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((max((min((((/* implicit */unsigned long long int) var_8)), (var_11))), ((~(14898485269659146392ULL))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14898485269659146384ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (3548258804050405247ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)31799))) : (var_5))))))));
    var_15 = ((/* implicit */long long int) (~(((/* implicit */int) ((var_1) && (((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_10))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [(_Bool)1] [i_2] = ((/* implicit */signed char) var_6);
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        var_16 = ((/* implicit */unsigned char) (~(((((((/* implicit */_Bool) (signed char)127)) ? (3548258804050405247ULL) : (var_7))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)78)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned short)27361)))))))));
                        var_17 = ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) var_6))))) >= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) > (14898485269659146419ULL)))))) ? ((~(((((/* implicit */unsigned long long int) var_3)) * (14898485269659146371ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))));
                        var_18 = ((/* implicit */int) (-(min((3548258804050405211ULL), (((/* implicit */unsigned long long int) arr_4 [i_1 - 2] [i_1] [i_1 - 3]))))));
                        arr_12 [i_3] [i_1] [i_1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)121))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1 + 1])) || (((/* implicit */_Bool) var_6))))) : (var_3)));
                        var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) (_Bool)1))))), (((var_11) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))))))) ? (((((/* implicit */_Bool) (-(var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) < (14898485269659146404ULL))))) : (((var_7) - (14898485269659146404ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)10401))))))))));
                    }
                    var_20 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */int) var_6)) > (((/* implicit */int) ((var_1) || (((/* implicit */_Bool) var_7)))))))), (max((((/* implicit */long long int) min((arr_10 [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) arr_2 [i_0]))))), (var_5)))));
                }
            } 
        } 
    } 
}
