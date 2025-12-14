/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155908
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */int) ((unsigned char) -833575072));
                var_11 = ((/* implicit */long long int) max(((~(((((/* implicit */_Bool) 17543394020700009778ULL)) ? (17543394020700009778ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned char)16]))))))), (((/* implicit */unsigned long long int) (~(-833575081))))));
                var_12 = ((/* implicit */int) (+((+(((((/* implicit */_Bool) 12939248475384449175ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : (arr_2 [i_0])))))));
                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) max((((/* implicit */int) (((-(var_4))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) 1376425099)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_1])))))))), (-1757451499))))));
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */short) max((((/* implicit */unsigned int) arr_0 [i_1])), (((((/* implicit */_Bool) (+(arr_2 [i_0])))) ? (((/* implicit */unsigned int) (+(-833575081)))) : (arr_2 [i_0])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 2; i_2 < 15; i_2 += 3) 
    {
        for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            for (int i_4 = 3; i_4 < 16; i_4 += 3) 
            {
                {
                    arr_13 [i_2] [i_2] [i_2] [i_4 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) == (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) -1055113063))))))));
                    arr_14 [i_2 - 1] [i_2] [i_2 - 1] = ((/* implicit */_Bool) ((17543394020700009778ULL) << (((((/* implicit */int) (signed char)-76)) + (137)))));
                }
            } 
        } 
    } 
}
