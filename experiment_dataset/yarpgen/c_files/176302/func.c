/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176302
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(((min((((/* implicit */int) var_7)), (var_14))) | ((~(((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 22; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_12 [i_1] = ((/* implicit */unsigned char) min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) arr_10 [i_1 + 1] [i_2 - 1] [i_1])) ? (((int) var_7)) : ((~(656138426)))))));
                            arr_13 [i_1] [i_1] [i_2 - 1] [i_3] = max((((((/* implicit */_Bool) 656138426)) ? (-656138427) : (((/* implicit */int) (signed char)-14)))), (((/* implicit */int) ((((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1] [i_1])) != (((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1] [i_1]))))));
                            var_16 = ((/* implicit */signed char) max((var_16), (((signed char) ((int) ((((/* implicit */int) arr_5 [(unsigned short)6] [20U] [(unsigned short)6])) / (((/* implicit */int) var_11))))))));
                            var_17 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -656138427)) ? (-900009176) : (((/* implicit */int) (signed char)-19))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)15491)))) : (arr_2 [i_0] [i_2 + 1] [(unsigned short)18])));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            {
                                arr_21 [i_0] [i_1] [i_0] [i_0] [i_6] [i_1 - 1] [i_5] = ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) 262403583)) + (5913739733789711908ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_12)), (((long long int) (signed char)-19)))))));
                                arr_22 [i_0] [i_1 - 1] [i_0] [i_1] [i_0] = max((max((((signed char) var_7)), ((signed char)-42))), (((/* implicit */signed char) ((((/* implicit */int) var_0)) <= (arr_4 [i_0] [i_0] [i_0])))));
                            }
                        } 
                    } 
                } 
                arr_23 [i_0] [i_1 - 1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])) ? (((((/* implicit */_Bool) min((var_14), (arr_15 [i_1] [i_1] [i_1] [i_0])))) ? (((((/* implicit */_Bool) var_13)) ? (arr_19 [i_0] [i_0] [i_1]) : (((/* implicit */int) var_11)))) : (((/* implicit */int) ((262403579) < (((/* implicit */int) arr_14 [i_1 - 1]))))))) : (((min((var_15), (((/* implicit */int) var_6)))) + (((/* implicit */int) ((((/* implicit */int) var_7)) >= (arr_0 [i_0]))))))));
                arr_24 [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_13) <= (((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_1 - 1] [i_0]))))) << (((((/* implicit */int) ((unsigned char) var_9))) - (88)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4916554470238032509ULL)) ? (12606291489330802346ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25157)))))) ? (((unsigned long long int) (signed char)(-127 - 1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_1 + 1] [i_1] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_1] [i_0]))))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) (((((!(((/* implicit */_Bool) 1984627359U)))) || (((/* implicit */_Bool) 0U)))) && (var_0)));
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (signed char)38)) : (((/* implicit */int) (unsigned char)58)))))));
}
