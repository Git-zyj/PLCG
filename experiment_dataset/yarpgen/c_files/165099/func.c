/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165099
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
    var_16 = ((/* implicit */unsigned char) var_4);
    var_17 = ((/* implicit */short) (unsigned short)15550);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) (+(((unsigned long long int) var_4))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 11; i_3 += 3) 
                    {
                        for (int i_4 = 1; i_4 < 8; i_4 += 1) 
                        {
                            {
                                arr_13 [(short)10] [(unsigned short)2] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((var_3) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) 227487205)) > (var_11))))))) ? (max((((/* implicit */int) ((((/* implicit */_Bool) 279223176896970752LL)) || (((/* implicit */_Bool) arr_1 [i_2] [i_2]))))), (((int) 279223176896970742LL)))) : (((/* implicit */int) ((((/* implicit */_Bool) 3101516110U)) || (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)33573))))))))));
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((min((var_11), (2905996877U))), (((/* implicit */unsigned int) 227487205))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_1] [2LL] [(unsigned short)2] [2LL] [i_4])) ? (var_7) : (((/* implicit */int) (unsigned short)31962))))) : (((long long int) ((10LL) >= (((/* implicit */long long int) var_7)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [2] [2] [i_0] [i_0] [i_0])))))) != (arr_5 [i_0] [i_0] [i_0] [(unsigned char)6])));
        arr_14 [i_0] = ((/* implicit */long long int) (-(arr_2 [i_0])));
    }
}
