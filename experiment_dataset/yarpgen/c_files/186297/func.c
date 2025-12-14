/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186297
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
    var_11 = ((/* implicit */unsigned char) var_3);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) min((min((((/* implicit */unsigned int) var_3)), (arr_1 [i_0] [i_0]))), (((/* implicit */unsigned int) max((-16330892), (-1049707079))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) max((max((min((((/* implicit */long long int) arr_1 [i_0] [(unsigned short)13])), (-7641242631065078639LL))), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_6)), (arr_1 [i_0] [i_0])))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), (1923160165U))))));
    }
    for (short i_1 = 0; i_1 < 22; i_1 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) max((max((arr_7 [i_1] [i_1]), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) max((arr_5 [i_1] [i_1]), (arr_5 [(_Bool)1] [i_1])))))))));
        arr_8 [(_Bool)1] = ((/* implicit */short) min((max((((/* implicit */unsigned long long int) min((7641242631065078638LL), (((/* implicit */long long int) (short)20926))))), (max((((/* implicit */unsigned long long int) 7641242631065078638LL)), (arr_7 [i_1] [i_1]))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_6 [i_1])), (min((var_2), (1049707078))))))));
    }
    for (short i_2 = 0; i_2 < 22; i_2 += 4) /* same iter space */
    {
        arr_12 [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) max(((unsigned short)2894), ((unsigned short)11186)))), (min((arr_9 [i_2]), (arr_9 [i_2])))));
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            for (short i_4 = 2; i_4 < 21; i_4 += 4) 
            {
                for (long long int i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    {
                        var_13 = ((/* implicit */unsigned long long int) min((max((761333518U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) max((var_8), (arr_13 [i_4 - 1] [i_5] [i_5]))))));
                        var_14 = ((/* implicit */long long int) max((max((((/* implicit */unsigned int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-111)))), (arr_17 [i_5] [i_5] [1U] [i_2]))), (((/* implicit */unsigned int) max((arr_4 [i_4 - 2]), (((/* implicit */unsigned short) (_Bool)1)))))));
                        var_15 = ((/* implicit */short) min((max((2453105278U), (((/* implicit */unsigned int) var_10)))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_7)), (arr_13 [i_4] [i_4 + 1] [i_3]))))));
                        arr_19 [i_5] [i_5] [i_4 - 2] [i_4 - 2] = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) min((var_2), (((/* implicit */int) arr_14 [i_3] [i_5]))))), (max((((/* implicit */unsigned long long int) var_4)), (arr_7 [i_5] [i_5]))))), (((/* implicit */unsigned long long int) max((max((var_4), (((/* implicit */unsigned int) arr_4 [i_3])))), (((/* implicit */unsigned int) min((var_8), (((/* implicit */unsigned short) (short)(-32767 - 1)))))))))));
                    }
                } 
            } 
        } 
        var_16 += ((/* implicit */_Bool) max((max((-8269031470661758151LL), (((/* implicit */long long int) max(((unsigned short)62372), ((unsigned short)62365)))))), (((/* implicit */long long int) 0U))));
        var_17 = ((/* implicit */long long int) max((max((arr_7 [i_2] [i_2]), (((/* implicit */unsigned long long int) max((arr_6 [i_2]), (arr_5 [10] [10])))))), (((/* implicit */unsigned long long int) max((var_8), (((/* implicit */unsigned short) (short)27107)))))));
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) min((var_3), (((/* implicit */short) var_7))))), (max((-6570044127535408580LL), (((/* implicit */long long int) (short)-6715)))))), (((/* implicit */long long int) max((max((var_4), (((/* implicit */unsigned int) arr_16 [i_2] [i_2])))), (max((arr_17 [i_2] [i_2] [i_2] [i_2]), (((/* implicit */unsigned int) arr_18 [i_2] [i_2] [i_2] [i_2] [12]))))))))))));
    }
    var_19 = ((/* implicit */signed char) max((max((min((var_8), (((/* implicit */unsigned short) var_7)))), (var_9))), (max(((unsigned short)65535), (((/* implicit */unsigned short) (short)-1835))))));
}
