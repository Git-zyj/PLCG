/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146902
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
    var_15 = ((/* implicit */unsigned short) var_10);
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        var_16 += ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) arr_0 [i_0])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))), (((/* implicit */unsigned long long int) arr_1 [7ULL])))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((var_10) | (((/* implicit */long long int) ((/* implicit */int) (short)-13336))))) >= (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) (unsigned short)61774)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1141))) : (0ULL)))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((short) var_2))) <= (((/* implicit */int) (unsigned short)64381))));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) var_7);
    }
    for (unsigned short i_1 = 4; i_1 < 7; i_1 += 2) 
    {
        var_17 = ((/* implicit */unsigned int) arr_7 [i_1]);
        var_18 += ((/* implicit */unsigned int) ((int) max((var_5), ((signed char)-35))));
        var_19 = ((/* implicit */short) arr_8 [i_1]);
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-74))) >= (var_10)));
    }
    /* vectorizable */
    for (unsigned int i_2 = 2; i_2 < 20; i_2 += 3) 
    {
        var_21 = ((/* implicit */unsigned long long int) (+(arr_9 [i_2 - 2])));
        arr_12 [i_2] = ((/* implicit */unsigned int) var_10);
        /* LoopNest 2 */
        for (unsigned int i_3 = 2; i_3 < 19; i_3 += 1) 
        {
            for (int i_4 = 3; i_4 < 19; i_4 += 2) 
            {
                {
                    arr_19 [i_2] [i_3] [i_2] [i_3 + 3] = ((/* implicit */_Bool) ((unsigned long long int) 2543888897673694281ULL));
                    arr_20 [i_2] [i_3 - 2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)34024)) ? (((/* implicit */int) (unsigned short)4096)) : (((/* implicit */int) (unsigned short)1124))));
                }
            } 
        } 
        arr_21 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (arr_13 [i_2 - 1]) : (arr_13 [i_2 - 1])));
    }
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) == (((/* implicit */int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)21270))) / (-1657272143428969430LL)))))));
    var_23 = ((/* implicit */signed char) max(((((+(((/* implicit */int) (unsigned short)65535)))) * (((/* implicit */int) ((signed char) 7127105229251713836ULL))))), (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)1141)) ? (880736886U) : (1783743118U))) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)9682))))))));
    var_24 = ((/* implicit */int) var_10);
}
