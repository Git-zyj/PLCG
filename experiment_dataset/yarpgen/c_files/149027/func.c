/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149027
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
    var_18 = ((/* implicit */unsigned int) var_10);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_19 = (-(((((/* implicit */_Bool) var_13)) ? (8700484887661949413ULL) : (arr_0 [i_0]))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (var_5)));
                    var_21 = arr_9 [i_0];
                    arr_12 [i_1] = max(((+(var_17))), (max((var_15), (var_14))));
                }
            } 
        } 
    }
    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) /* same iter space */
    {
        arr_16 [i_3] = ((/* implicit */unsigned int) (((((+(3012447184207137182ULL))) | (5776057374969119607ULL))) != (((/* implicit */unsigned long long int) (+(((3665190738U) / (2191720386U))))))));
        var_22 = ((/* implicit */unsigned long long int) var_11);
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_5 = 2; i_5 < 16; i_5 += 3) 
        {
            arr_24 [0U] |= ((32640U) | ((~(1565941313U))));
            var_23 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 7525028550175137950ULL)) ? (3012447184207137207ULL) : (((/* implicit */unsigned long long int) 3665190714U)))) | (((/* implicit */unsigned long long int) ((var_6) & (var_13))))));
            var_24 = ((/* implicit */unsigned int) (~(((((/* implicit */unsigned long long int) var_11)) ^ (var_16)))));
            arr_25 [i_4] [i_5] = ((/* implicit */unsigned int) arr_9 [i_4]);
            /* LoopSeq 1 */
            for (unsigned long long int i_6 = 3; i_6 < 16; i_6 += 1) 
            {
                var_25 = ((var_0) / (arr_6 [i_5] [i_6 + 1]));
                var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (1565941323U) : (var_15)))) ? (((var_16) << (((var_1) - (3335305961U))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_4] [i_6 + 1])) || (((/* implicit */_Bool) var_12)))))));
            }
        }
        var_27 = ((/* implicit */unsigned long long int) ((unsigned int) arr_28 [i_4] [i_4]));
        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_4])) ? (arr_13 [i_4]) : (((/* implicit */unsigned long long int) 706325064U))));
    }
    var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */unsigned long long int) var_13)) : (((unsigned long long int) var_8))));
    var_30 = ((/* implicit */unsigned long long int) var_11);
    var_31 = ((min((((((/* implicit */_Bool) 33554368U)) ? (449813662180363013ULL) : (15434296889502414432ULL))), (((2ULL) >> (((4294967271U) - (4294967244U))))))) << (((((((/* implicit */_Bool) ((unsigned long long int) var_12))) ? (var_8) : (var_2))) - (1607986865U))));
}
