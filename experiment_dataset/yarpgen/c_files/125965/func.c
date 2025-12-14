/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125965
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) var_15);
        var_20 = ((/* implicit */unsigned short) min((var_20), (((unsigned short) var_18))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 3; i_2 < 9; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((unsigned int) arr_6 [i_0] [i_1] [i_2 + 1])))));
                    var_22 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) arr_4 [i_2] [i_0] [i_0])) == (((/* implicit */int) arr_0 [i_1] [i_1])))));
                }
            } 
        } 
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 3; i_3 < 15; i_3 += 2) 
    {
        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((int) 25ULL)))));
        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (~(arr_8 [i_3 + 1]))))));
    }
    /* LoopNest 3 */
    for (signed char i_4 = 0; i_4 < 23; i_4 += 4) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 3) 
        {
            for (signed char i_6 = 0; i_6 < 23; i_6 += 3) 
            {
                {
                    var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) / (6584836188897784839ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) * (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)36171)) * (((/* implicit */int) (unsigned char)155))))) / (((var_15) / (((/* implicit */long long int) ((/* implicit */int) var_8)))))))))))));
                    var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((arr_10 [i_5]) == (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
                    var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_13 [i_4] [i_5] [i_4]), (((((/* implicit */long long int) ((/* implicit */int) var_10))) % (arr_13 [(unsigned char)22] [i_5] [i_4])))))))))));
                    arr_16 [i_4] [i_5] [i_4] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) (signed char)12)) < (2147483647))));
                    var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) (-(((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_11 [i_4])), (var_1)))) : (((/* implicit */int) var_12)))))))));
                }
            } 
        } 
    } 
}
