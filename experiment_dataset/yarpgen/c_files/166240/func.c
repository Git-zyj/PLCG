/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166240
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        arr_11 [i_2] [i_0 - 1] [i_2] [i_3] = ((/* implicit */signed char) (unsigned short)52142);
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_0] [i_0] = ((/* implicit */unsigned char) var_9);
                        arr_13 [(signed char)4] = min((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-92))))), (min(((~(arr_6 [i_0] [i_1] [i_2]))), (((/* implicit */unsigned int) min((var_2), (var_2)))))));
                        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-123)) ? (1335114162204832570LL) : (((6943615430179965534LL) % (3099226897937582882LL)))))) ? (((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_13)), (arr_1 [i_1]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0])))))) : (((/* implicit */int) (short)23424)))))));
                    }
                    var_18 = arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1];
                    arr_14 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((-6943615430179965551LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)-65)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-1LL)))) ? ((-(((/* implicit */int) (signed char)97)))) : (((/* implicit */int) var_4))))));
                    arr_15 [i_2] [i_2] [i_2] = ((/* implicit */signed char) arr_0 [i_1]);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) var_4);
}
