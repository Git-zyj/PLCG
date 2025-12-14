/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104686
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 -= min((max((var_2), (((/* implicit */long long int) (unsigned short)443)))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)127)), (2877472308U)))));
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) max((((/* implicit */unsigned short) max((((/* implicit */short) (signed char)(-127 - 1))), (var_16)))), (min(((unsigned short)4), ((unsigned short)65523))))))));
    }
    var_20 &= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) var_5)), (var_15))), (((/* implicit */long long int) var_13))))), (max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)125)), (-2004977703523732719LL)))), (min((var_3), (var_3)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        for (int i_2 = 1; i_2 < 9; i_2 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    var_21 = ((/* implicit */int) max((max((((/* implicit */long long int) max((arr_5 [i_1]), (((/* implicit */unsigned int) -1200981205))))), (max((((/* implicit */long long int) (unsigned short)33429)), (var_2))))), (((/* implicit */long long int) max((((/* implicit */unsigned char) (signed char)-112)), ((unsigned char)244))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                    {
                        for (int i_5 = 1; i_5 < 8; i_5 += 4) 
                        {
                            {
                                arr_15 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) max((min((((/* implicit */long long int) arr_8 [i_2] [i_1] [i_2 + 1] [i_5 + 1])), (var_2))), (max((((/* implicit */long long int) (unsigned short)65532)), (-7LL)))));
                                arr_16 [i_5] [2] [i_3] [i_1] [i_5] [(short)6] = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) var_13)), (max((((/* implicit */unsigned long long int) var_15)), (var_0))))), (((/* implicit */unsigned long long int) min((max((((/* implicit */int) (signed char)101)), (-1200981191))), (((/* implicit */int) max((var_4), (var_9)))))))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 11; i_6 += 4) 
                {
                    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        {
                            var_22 &= ((/* implicit */unsigned int) min((max((max((((/* implicit */unsigned long long int) (unsigned short)42343)), (501052399936975939ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)22252)), (arr_14 [i_1] [6U] [i_2] [i_2] [i_6] [i_7])))))), (((/* implicit */unsigned long long int) max(((unsigned short)56695), (var_7))))));
                            var_23 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) var_4)), (max((2889295130431920136ULL), (((/* implicit */unsigned long long int) (signed char)90)))))), (((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) (_Bool)1)), (var_2))), (((/* implicit */long long int) 1602573266)))))));
                            arr_22 [i_1] [i_2] [i_6] [i_1] [i_7] = ((/* implicit */short) max((((/* implicit */unsigned char) max((arr_17 [i_2 - 1] [i_2] [i_2 + 2] [i_6]), (arr_17 [i_2 - 1] [i_2 - 1] [i_2 + 2] [i_6])))), (min(((unsigned char)0), (((/* implicit */unsigned char) arr_17 [i_2 - 1] [i_2] [i_2 + 2] [i_6]))))));
                            arr_23 [i_2] [i_2] [i_6] [i_7] [i_1] = ((/* implicit */unsigned short) max((max((arr_20 [i_2 + 2] [i_2] [i_6] [i_6]), (((/* implicit */long long int) (unsigned char)166)))), (((/* implicit */long long int) max((((/* implicit */short) var_11)), (arr_11 [6ULL] [i_1] [i_2 + 1] [(signed char)5] [i_2 + 2]))))));
                        }
                    } 
                } 
                arr_24 [i_1] [i_1] [i_2] = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) arr_14 [i_2 - 1] [i_1] [i_2 + 2] [i_2 + 1] [i_1] [i_2 - 1])), (var_0))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_5)), ((unsigned short)54427))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) var_17);
}
