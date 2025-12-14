/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180854
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
    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) var_11))));
    var_13 = ((/* implicit */unsigned char) ((int) ((((-1415997345) & (((/* implicit */int) (unsigned char)18)))) << (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (-1804022158))) - (233))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 23; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */int) min((((arr_5 [i_0] [i_1] [i_2]) && (((((/* implicit */int) arr_6 [i_0] [i_0] [(signed char)6] [i_0])) != (((/* implicit */int) var_0)))))), ((!(((((/* implicit */_Bool) arr_1 [i_0] [i_1])) && (arr_4 [i_0] [i_1] [(signed char)8])))))));
                    var_15 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_3 [i_0])))) || (((/* implicit */_Bool) ((unsigned char) arr_5 [i_2] [i_1 - 1] [i_0])))));
                    /* LoopSeq 1 */
                    for (int i_3 = 4; i_3 < 22; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)49)) ? ((-(((/* implicit */int) arr_8 [i_3 - 1] [i_2] [i_2 + 1] [i_2] [i_2])))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)192)))))))));
                        var_16 += ((/* implicit */unsigned char) ((((arr_5 [i_3] [i_3] [i_2 + 1]) ? (((/* implicit */int) arr_7 [i_2] [i_2] [i_3 - 4] [i_2] [i_2] [i_2 - 2])) : (((/* implicit */int) var_8)))) < (arr_0 [i_2 + 2] [(_Bool)1])));
                    }
                    var_17 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? ((+((~(((/* implicit */int) (unsigned char)237)))))) : (((/* implicit */int) (unsigned char)255))));
                    var_18 = ((/* implicit */unsigned char) arr_5 [i_1] [i_2 - 1] [i_2 - 1]);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) var_10);
    var_20 = ((/* implicit */unsigned long long int) var_8);
}
