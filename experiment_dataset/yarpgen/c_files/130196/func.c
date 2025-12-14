/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130196
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
    var_15 *= max((((/* implicit */unsigned long long int) var_2)), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)10))) | (1099511627775ULL))), (((/* implicit */unsigned long long int) ((9223372036854775793LL) >= (((/* implicit */long long int) 4194300U))))))));
    var_16 += ((/* implicit */short) var_4);
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 13; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) arr_2 [(unsigned char)8] [(unsigned char)8]))));
                    arr_6 [i_0 - 1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)11557)), ((unsigned short)2803))))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)11572))) - (10606291531457538137ULL)))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_3 = 1; i_3 < 20; i_3 += 4) 
    {
        for (long long int i_4 = 2; i_4 < 18; i_4 += 1) 
        {
            for (unsigned char i_5 = 2; i_5 < 20; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        for (long long int i_7 = 1; i_7 < 19; i_7 += 4) 
                        {
                            {
                                arr_19 [i_3] [i_3] [i_4 - 1] [i_5] [(_Bool)1] [i_6] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)135))));
                                var_18 = (+(((((/* implicit */_Bool) (~(((/* implicit */int) (short)11560))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-11535))) : (-9223372036854775790LL))));
                                arr_20 [i_3] [i_3] [i_3] [i_3 - 1] [(signed char)7] = ((/* implicit */signed char) max((min((arr_7 [i_3]), (((/* implicit */long long int) var_12)))), (-9223372036854775762LL)));
                            }
                        } 
                    } 
                    arr_21 [i_3] [i_5] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_10 [i_3 - 1])) ? (arr_10 [i_5 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3 - 1] [i_4]))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) <= (min((((/* implicit */unsigned int) arr_14 [i_3 + 1] [i_4 + 2] [(signed char)7] [i_5])), (arr_9 [i_4]))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((signed char) var_7)), (var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)2803)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))), (min((var_3), (((/* implicit */unsigned long long int) -9223372036854775792LL))))))));
}
