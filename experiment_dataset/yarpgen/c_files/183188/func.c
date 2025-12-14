/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183188
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
    var_14 = ((/* implicit */long long int) (-((+(((/* implicit */int) ((((/* implicit */unsigned long long int) 680288323U)) == (8630294660106187817ULL))))))));
    var_15 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) (~(var_1)))) > ((-(var_7))))))) + (((min((5985192828576491331ULL), (((/* implicit */unsigned long long int) var_6)))) - (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))))));
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (((!(((/* implicit */_Bool) var_5)))) || ((!(((/* implicit */_Bool) var_4))))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) && (((/* implicit */_Bool) (short)-27888))))) < (((/* implicit */int) max((arr_7 [i_0] [17] [i_2]), (arr_7 [i_0] [i_1] [i_0]))))))) <= (max(((-(arr_2 [i_1]))), (((/* implicit */int) min((((/* implicit */short) var_6)), ((short)27871))))))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) min(((+((+(arr_1 [i_0]))))), (((/* implicit */unsigned long long int) (+(max((((/* implicit */int) (short)-27888)), (arr_0 [9ULL] [(_Bool)1]))))))));
                    arr_9 [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_7 [i_1] [i_1] [i_0])) << (((arr_2 [i_1]) + (482937216))))) * (((/* implicit */int) ((arr_1 [i_2]) <= (arr_1 [i_1]))))))) <= (min((max((var_8), (((/* implicit */unsigned long long int) 2147483647)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3)))))))));
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (short)3749))))))) - (min((((/* implicit */unsigned long long int) ((((-1609408179) + (2147483647))) << (((/* implicit */int) (_Bool)1))))), (min((((/* implicit */unsigned long long int) var_13)), (var_10)))))));
                    arr_10 [(unsigned short)6] [i_1] [(_Bool)1] &= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (~(arr_5 [15LL]))))))));
                }
            } 
        } 
    } 
    var_19 = (-(((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (var_7))) + (((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))))));
}
