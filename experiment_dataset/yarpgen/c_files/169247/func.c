/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169247
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) arr_0 [i_0] [i_0]))) ^ (((/* implicit */int) min((var_3), ((unsigned short)8191))))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) max(((unsigned char)255), (((/* implicit */unsigned char) (signed char)7))))), (max((arr_4 [i_1] [i_0] [i_0]), (((/* implicit */unsigned short) (unsigned char)226))))))) : ((-(((/* implicit */int) (unsigned short)57344)))));
                var_11 ^= ((/* implicit */int) (unsigned short)35600);
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            arr_10 [i_3] [i_0] = ((/* implicit */_Bool) min((max((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)255)), ((unsigned short)8169)))))), ((+(((((/* implicit */_Bool) (unsigned char)164)) ? (((/* implicit */int) (short)26376)) : (arr_6 [i_0] [i_1] [i_2])))))));
                            arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((min((arr_4 [i_3] [i_0] [i_1]), (((/* implicit */unsigned short) arr_7 [i_0] [i_1] [i_2] [i_0])))), ((unsigned short)8159))))) : (((((/* implicit */_Bool) 795301795)) ? (12ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                            arr_12 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min(((unsigned short)15902), (((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_0] [i_3] [i_0]))));
                            var_12 *= ((/* implicit */short) ((((/* implicit */_Bool) (-(min((((/* implicit */int) (signed char)7)), (1680910401)))))) ? (min((((/* implicit */int) (_Bool)1)), (arr_1 [i_1]))) : (max((((/* implicit */int) arr_3 [i_1] [i_2] [i_3])), (min((-633156716), (((/* implicit */int) (unsigned short)62159))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) (signed char)69))));
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)47448)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-7))) : (((((/* implicit */_Bool) (unsigned short)35598)) ? (9223372036854775807LL) : (min((((/* implicit */long long int) (unsigned short)60218)), (9223372036854775807LL)))))));
    var_15 *= var_2;
}
