/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13587
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_12 += ((/* implicit */unsigned long long int) (-(((unsigned int) var_2))));
                var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) var_7))));
                var_14 = ((/* implicit */unsigned short) (-(((((((/* implicit */int) var_4)) + (((/* implicit */int) var_1)))) | (((/* implicit */int) min((var_4), (var_4))))))));
                arr_5 [5LL] [i_1] [i_1] = ((unsigned long long int) arr_3 [i_0 - 1] [0LL]);
            }
        } 
    } 
    /* LoopSeq 3 */
    for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                {
                    var_15 *= ((/* implicit */short) (~(((/* implicit */int) arr_10 [i_2] [i_2] [i_2]))));
                    var_16 = ((/* implicit */long long int) var_7);
                    var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_4)) <= (((/* implicit */int) var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_6 [(_Bool)1] [(_Bool)1])))) : ((~(var_7)))))) ? ((~(((/* implicit */int) arr_10 [(_Bool)1] [i_3] [i_4])))) : (((/* implicit */int) arr_0 [i_2] [i_3]))));
                    var_18 = ((/* implicit */long long int) max(((+(((/* implicit */int) (unsigned char)123)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-1))))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) / (var_2))))))));
                }
            } 
        } 
        var_19 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_9 [i_2])) == (((/* implicit */int) arr_9 [i_2])))))) % (((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_6))));
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)10)) != (((/* implicit */int) (signed char)5))));
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_0 [13] [13]))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 19; i_5 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) var_7))));
        arr_20 [i_5] [i_5] = ((/* implicit */_Bool) (-(var_11)));
        var_23 = ((/* implicit */short) var_0);
        arr_21 [i_5] = ((/* implicit */int) var_7);
    }
    for (int i_6 = 0; i_6 < 19; i_6 += 3) /* same iter space */
    {
        arr_24 [(unsigned char)2] = ((/* implicit */unsigned int) var_8);
        arr_25 [(unsigned short)9] [(unsigned short)9] = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) (-(((/* implicit */int) ((short) arr_22 [i_6])))))) : (var_8)));
        var_24 += ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)17637)) <= (4194303)));
    }
    var_25 = ((/* implicit */short) var_2);
}
