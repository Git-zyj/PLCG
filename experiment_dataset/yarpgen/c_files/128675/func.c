/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128675
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
    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) var_1))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    arr_9 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [(unsigned short)4])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) || (((/* implicit */_Bool) arr_6 [i_1] [i_2]))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) 1080863910568919040LL))) && (((/* implicit */_Bool) arr_6 [i_0] [i_1])))))));
                    arr_10 [i_2] = ((((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */unsigned short) (short)18610)), ((unsigned short)9673))))))) ? (max((((arr_5 [(signed char)4] [i_1] [i_1]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9655))))), (((/* implicit */long long int) arr_8 [i_0] [(short)6] [i_0] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_6 [i_1] [i_0])))))))));
                    var_14 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-103))))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) var_7)), (arr_0 [i_2])))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_2]))))) : (arr_6 [i_0] [i_0]))) : (((long long int) ((((/* implicit */_Bool) (unsigned short)45679)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2]))) : (arr_0 [i_0]))))));
                }
            } 
        } 
        arr_11 [(unsigned short)17] [i_0] = ((/* implicit */signed char) ((long long int) (-(((/* implicit */int) ((-870844507510879919LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55857)))))))));
        arr_12 [(unsigned short)17] = ((/* implicit */long long int) (~(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))));
        arr_13 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) arr_3 [i_0]))))) : (var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))) : (max((((((/* implicit */_Bool) (short)18479)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_6))), (arr_7 [i_0] [i_0])))));
        var_15 = ((/* implicit */short) arr_2 [i_0]);
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
    {
        var_16 = ((/* implicit */long long int) ((arr_5 [i_3] [i_3] [i_3]) < (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3])))));
        var_17 = ((/* implicit */long long int) arr_15 [i_3]);
    }
    var_18 = var_0;
    var_19 = 5801857800393544265LL;
    var_20 = ((/* implicit */long long int) (unsigned short)9655);
}
