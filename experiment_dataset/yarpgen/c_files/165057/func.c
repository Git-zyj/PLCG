/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165057
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
    var_11 = ((/* implicit */int) min((5233195126300264738LL), (((/* implicit */long long int) (_Bool)1))));
    var_12 = ((/* implicit */signed char) max((max((min((var_5), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_7)), (var_10)))))), (((/* implicit */unsigned long long int) max(((_Bool)1), ((_Bool)1))))));
    var_13 = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) min((((/* implicit */signed char) (_Bool)1)), (var_0)))), (min((17677012819945606542ULL), (((/* implicit */unsigned long long int) (unsigned short)18090)))))), (((/* implicit */unsigned long long int) max((max((var_2), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) min((var_8), (((/* implicit */unsigned short) (_Bool)1))))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] = min((((/* implicit */long long int) max(((signed char)30), ((signed char)-29)))), (min((max((((/* implicit */long long int) (_Bool)1)), (var_2))), (((/* implicit */long long int) min((var_8), (((/* implicit */unsigned short) var_4))))))));
        arr_3 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((2080374784), (((/* implicit */int) arr_0 [(signed char)7] [i_0]))))), (min((((/* implicit */long long int) arr_1 [i_0] [i_0])), (7196689939724649738LL)))))), (max((((/* implicit */unsigned long long int) min((var_9), (((/* implicit */unsigned char) (signed char)70))))), (min((((/* implicit */unsigned long long int) -4661860063698362982LL)), (5319894896183492771ULL)))))));
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 21; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    {
                        arr_13 [i_1] [i_1] = ((/* implicit */signed char) 50331648);
                        arr_14 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (signed char)30);
                    }
                } 
            } 
        } 
        arr_15 [i_1] [i_1] = (_Bool)1;
    }
}
