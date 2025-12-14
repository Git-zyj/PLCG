/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171016
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
    var_14 = ((/* implicit */unsigned long long int) var_6);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0] [i_1])) | (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_4 [i_0] [(unsigned short)10] [i_1])))) || (arr_0 [i_1] [i_0]))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned int i_3 = 2; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) 1206289066U)) ? (1206289066U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)14719))))));
                            arr_9 [i_0] [i_2] [i_3] = ((/* implicit */long long int) ((((_Bool) ((3088678244U) & (((/* implicit */unsigned int) var_1))))) ? (max((max((16789152449931631514ULL), (((/* implicit */unsigned long long int) arr_6 [(_Bool)1] [i_2] [i_2] [i_1])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16789152449931631514ULL)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_8 [i_2] [i_1]))))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))))), ((((_Bool)1) ? (9223372036854775786LL) : (-1604219411879447948LL))))))));
                            var_17 &= var_11;
                        }
                    } 
                } 
                var_18 = ((/* implicit */_Bool) (+(((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) <= (3494822986657254423LL)))) ^ ((~(((/* implicit */int) var_3))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) ((var_2) - (((((/* implicit */_Bool) max((4190208), (((/* implicit */int) var_6))))) ? (max((16789152449931631505ULL), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((-2016093338030981863LL) / (((/* implicit */long long int) 3088678240U)))))))));
    var_20 = ((/* implicit */int) min((((/* implicit */long long int) var_11)), (var_13)));
}
