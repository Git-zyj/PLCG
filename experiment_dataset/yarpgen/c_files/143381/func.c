/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143381
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
    var_17 = ((/* implicit */long long int) min((min((var_2), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) ((_Bool) max((var_15), (((/* implicit */int) (signed char)127))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [(signed char)3] [(unsigned short)8])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_1])) : (((((/* implicit */_Bool) arr_2 [(unsigned char)5])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) var_9)))))))));
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 1529438538U)) ? (((/* implicit */int) (short)4142)) : (((/* implicit */int) (short)4135)))) * (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) max((arr_2 [i_1]), (arr_2 [i_1])))) : (((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_1] [i_1]))))) ? (((/* implicit */int) max((((/* implicit */short) var_6)), (var_9)))) : (((/* implicit */int) ((((/* implicit */_Bool) -532412587)) || (((/* implicit */_Bool) var_8)))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) (+(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0]))));
                            var_20 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((((_Bool) var_14)), (var_11)))), (4398046511103ULL)));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_11))) ? ((-(((/* implicit */int) arr_1 [i_0])))) : (((var_6) ? (((/* implicit */int) arr_1 [(unsigned char)2])) : (((/* implicit */int) arr_1 [i_0]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_4 = 2; i_4 < 18; i_4 += 2) 
    {
        for (unsigned char i_5 = 2; i_5 < 19; i_5 += 2) 
        {
            for (unsigned char i_6 = 1; i_6 < 19; i_6 += 2) 
            {
                {
                    var_22 -= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_20 [(signed char)0] [i_6] [i_6 + 1])) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [(unsigned char)14] [16] [(unsigned char)4]))))))) ? (arr_15 [i_6 - 1] [(_Bool)1]) : (((/* implicit */int) var_7))));
                    var_23 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (short)-3249)))) ? (((((/* implicit */_Bool) (signed char)-94)) ? (((/* implicit */int) ((_Bool) (unsigned short)48))) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)77)))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(18446739675663040481ULL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) 1006784583)) : (var_8)))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) var_4)), ((short)4142))))))))));
}
