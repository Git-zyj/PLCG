/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109015
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
    var_14 = ((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) -1251067758172668163LL)))), ((!(((/* implicit */_Bool) max((var_9), (var_0))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 13; i_2 += 2) 
            {
                {
                    var_15 -= ((/* implicit */unsigned int) ((max((arr_6 [i_0]), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [(unsigned char)10] [(unsigned char)10]))) & (arr_6 [i_0]))))) * (arr_6 [i_0])));
                    var_16 += ((/* implicit */signed char) ((((((((/* implicit */_Bool) 1251067758172668162LL)) ? (((/* implicit */unsigned long long int) arr_2 [i_0])) : (arr_4 [i_0] [i_1 - 2]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) < (((/* implicit */int) (unsigned short)26658)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0])))))) : (min((((arr_4 [i_2] [i_2]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1510098371)) ? (((/* implicit */int) (signed char)-59)) : (((/* implicit */int) arr_7 [i_0] [i_1] [(short)10] [4LL])))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) max((arr_4 [i_2] [i_2]), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0] [13LL] [i_1])) - (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_3]))))) > (((((/* implicit */_Bool) arr_12 [i_1] [(signed char)7])) ? (556324210U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))));
                                arr_17 [i_0] [i_1] [(unsigned short)15] [i_1] [i_4] [i_0] [(unsigned short)15] = ((/* implicit */short) arr_15 [i_0] [i_1] [i_1 - 1] [i_2 - 1] [i_4] [i_1]);
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 18076471458020749168ULL)))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)26651)) * (((/* implicit */int) var_3))))) : (-7123289916998097907LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17565599555143499738ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-6123))) : (-1251067758172668178LL)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 841489146U)) ? (370272615688802448ULL) : (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)78)) && (((/* implicit */_Bool) 258664027U)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [(unsigned short)13] [i_1]))) % (18076471458020749177ULL)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 += ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */int) (signed char)-81)) < (((/* implicit */int) (unsigned char)16)))))))) ^ (-2824790032708478177LL)));
    var_20 = var_12;
}
