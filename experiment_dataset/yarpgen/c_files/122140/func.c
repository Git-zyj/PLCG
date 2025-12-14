/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122140
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_3 [i_0] = max((((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) >= (arr_0 [i_0]))) ? (((/* implicit */int) (signed char)-50)) : (((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */int) (signed char)-6)))))), (((int) max((-3214772140424456607LL), (((/* implicit */long long int) (signed char)39))))));
        arr_4 [i_0] [8LL] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) arr_1 [i_0]))))) ? (max((((/* implicit */long long int) arr_2 [i_0])), (-7661803945691107638LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) min((603555875), (var_2))))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    {
                        arr_11 [18ULL] [i_0] [18ULL] [i_3] |= ((/* implicit */long long int) ((max(((-(13728011147838695416ULL))), (((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned char) var_15))))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [12LL] [i_2] [12LL])) <= (((/* implicit */int) arr_5 [(signed char)16] [i_1] [i_1]))))))));
                        arr_12 [i_0] [i_0] [i_3] [i_3] = ((/* implicit */short) min((((((((/* implicit */_Bool) 4718732925870856223ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-19))) : (3783821419U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [7]))))), (var_12)));
                        arr_13 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */unsigned short) ((((_Bool) var_10)) ? (((/* implicit */int) max((var_16), (((/* implicit */unsigned short) arr_1 [i_0]))))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (var_2) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))))));
                    }
                } 
            } 
        } 
        arr_14 [2U] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_1) % (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0])))))) ? (max((13728011147838695416ULL), (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((int) var_0)))));
        arr_15 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((3910547465750584576ULL), (((/* implicit */unsigned long long int) var_14))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (max((((/* implicit */long long int) var_16)), (7899017600408329772LL)))));
    }
    for (int i_4 = 2; i_4 < 21; i_4 += 1) 
    {
        arr_18 [i_4] = ((((/* implicit */int) arr_5 [(_Bool)1] [i_4 + 1] [i_4])) / (((/* implicit */int) min(((unsigned short)3), (((/* implicit */unsigned short) arr_5 [(unsigned char)18] [i_4 - 2] [i_4]))))));
        arr_19 [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)97))) - (18446744073709551615ULL))), (((/* implicit */unsigned long long int) var_16))))) || (((/* implicit */_Bool) arr_16 [(signed char)5] [i_4 + 2]))));
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 16; i_5 += 2) 
    {
        for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 3) 
        {
            {
                arr_25 [9ULL] [i_6] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_4))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_11)))) : (arr_0 [i_5])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1195641379236374872ULL))))) : (((((/* implicit */int) arr_5 [i_5] [i_5] [i_6 + 1])) / ((+(var_0))))));
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_5] [i_6 - 1] [14LL]))) - (((((/* implicit */long long int) ((/* implicit */int) var_10))) / (var_11))))) / (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)47266), ((unsigned short)27122))))))))));
                var_18 *= ((/* implicit */unsigned int) arr_10 [i_5 - 2] [i_5 - 2] [i_5] [(unsigned short)14] [i_5] [(unsigned short)14]);
                var_19 += ((/* implicit */unsigned long long int) ((int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_2)) : (arr_17 [i_5 - 1] [i_5]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_5] [i_5 + 1] [i_6 - 1]))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(1498484715))))));
}
