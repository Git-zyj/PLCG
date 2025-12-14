/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121077
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
    var_15 = ((((/* implicit */_Bool) ((50536116) / (((/* implicit */int) (signed char)110))))) ? (((/* implicit */int) (signed char)-3)) : (max(((+(((/* implicit */int) var_8)))), (-1))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1])) ? (4992284481192505351LL) : (((/* implicit */long long int) (-2147483647 - 1))))))));
        var_16 = ((/* implicit */_Bool) min((((arr_0 [i_0 - 1]) ? (((/* implicit */int) arr_0 [i_0])) : (arr_1 [i_0] [i_0]))), ((((-(((/* implicit */int) arr_0 [(_Bool)1])))) ^ (((/* implicit */int) ((((/* implicit */_Bool) 8003926021504333360LL)) && (((/* implicit */_Bool) -195979145349269214LL)))))))));
    }
    for (int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            var_17 = ((/* implicit */_Bool) var_12);
            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2356846058319811892LL)) ? (259305752) : (((/* implicit */int) (signed char)-100))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)124)) == (50536120))))) : (arr_9 [i_2]))), (((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)6)))) * (-50536123)))))))));
            arr_10 [i_2] |= ((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_2])))))))), (((((/* implicit */_Bool) (~(0)))) ? (((/* implicit */long long int) -131282758)) : (-8733101939483459193LL)))));
            var_19 &= min((((/* implicit */signed char) (_Bool)0)), ((signed char)38));
        }
        arr_11 [i_1] = ((/* implicit */int) max((-3318169897430400222LL), (((/* implicit */long long int) (signed char)101))));
        arr_12 [i_1] = ((int) arr_4 [i_1] [i_1]);
        arr_13 [i_1] = ((/* implicit */_Bool) min((((/* implicit */int) ((max((arr_5 [i_1]), (((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) (signed char)18))))), (((((/* implicit */int) min((((/* implicit */signed char) arr_7 [i_1] [i_1] [i_1])), (var_0)))) ^ (((/* implicit */int) arr_7 [i_1] [i_1] [i_1]))))));
    }
    var_20 += -470907549856120961LL;
}
