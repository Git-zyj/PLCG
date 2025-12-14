/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155551
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) (+(-1647190186)));
                var_12 = ((/* implicit */unsigned char) min((((/* implicit */int) ((618608648716712096ULL) > (((/* implicit */unsigned long long int) 0))))), (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (arr_1 [i_0] [i_1]) : (arr_1 [i_0] [i_1])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            {
                var_13 = ((/* implicit */int) ((((/* implicit */long long int) ((var_8) / (-23)))) / (9223372036854775807LL)));
                var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */_Bool) (((+(arr_5 [i_3] [i_2]))) / (((/* implicit */long long int) min((3912601597U), (((/* implicit */unsigned int) (unsigned char)32)))))))) ? (((/* implicit */unsigned long long int) arr_5 [i_3] [i_2])) : (((unsigned long long int) min(((signed char)-90), ((signed char)-124)))))))));
                /* LoopSeq 1 */
                for (int i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)0), ((unsigned short)65521))))) ^ (min((arr_8 [i_3]), (((/* implicit */long long int) arr_6 [i_2] [i_3]))))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)45)) > (arr_1 [i_4] [i_4])))), (((((/* implicit */_Bool) arr_7 [i_2])) ? (130944ULL) : (18446744073709551613ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3] [i_3])) ? (((/* implicit */long long int) arr_4 [i_2])) : (arr_5 [i_2] [i_2])))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) > (2338511586U)))) : (arr_6 [i_2] [i_2]))))));
                    var_16 = (~(arr_6 [i_2] [i_2]));
                }
                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (short)1920))));
                arr_10 [i_2] [i_2] = min((((/* implicit */int) ((min((2ULL), (((/* implicit */unsigned long long int) arr_0 [i_2] [i_3])))) > (((/* implicit */unsigned long long int) ((12) << (((((/* implicit */int) (signed char)-90)) + (91))))))))), ((+(((/* implicit */int) ((unsigned char) (unsigned short)27354))))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) var_5);
    var_19 &= ((/* implicit */unsigned int) ((((/* implicit */int) (short)32640)) * (((/* implicit */int) (unsigned short)27357))));
}
