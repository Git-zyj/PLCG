/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178707
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
    var_14 = ((/* implicit */unsigned char) max((-273664985), (((/* implicit */int) var_10))));
    var_15 = ((/* implicit */unsigned char) var_3);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_8 [(unsigned char)8] [i_1] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */int) (short)-15010)) < (((/* implicit */int) (unsigned char)2))));
                            arr_9 [i_0] [i_1] [(signed char)2] [(unsigned short)20] = ((/* implicit */unsigned char) min((1080863910568919040ULL), (((/* implicit */unsigned long long int) (signed char)-47))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 3; i_4 < 23; i_4 += 4) 
                {
                    for (int i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_4] [i_5])) : (((/* implicit */int) var_4))))) >= ((((!(((/* implicit */_Bool) var_9)))) ? (((((/* implicit */_Bool) var_12)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [16] [i_4 + 1])))))));
                            var_17 = ((/* implicit */int) 10246978031711424390ULL);
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_2 [i_0] [i_1] [i_1])))) ? (((((/* implicit */int) var_8)) + (((/* implicit */int) min((arr_4 [i_0] [i_1]), (arr_10 [i_1] [i_1] [i_1] [i_0])))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)192), ((unsigned char)143))))) >= (min((var_6), (((/* implicit */unsigned long long int) (_Bool)1)))))))));
                var_19 = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned short)1023)) | (((/* implicit */int) (_Bool)1)))) / ((((((_Bool)0) || (((/* implicit */_Bool) (unsigned short)64445)))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_15 [i_0] [i_0] [i_0])), (var_12))))))));
            }
        } 
    } 
    var_20 -= ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) (_Bool)1)), (17365880163140632574ULL))), (((((/* implicit */_Bool) (short)-3662)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)64445)) & (((/* implicit */int) var_1))))) : (((17365880163140632576ULL) >> (((((/* implicit */int) var_12)) - (53220)))))))));
}
