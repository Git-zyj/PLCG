/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101458
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
    var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((var_14), (var_10)))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_6)))))) <= (((/* implicit */unsigned long long int) var_5))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_0)))) && (((/* implicit */_Bool) (~(15272949239357452943ULL))))));
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (((~(var_9))) << (((min((max((arr_0 [0ULL]), (((/* implicit */unsigned long long int) var_6)))), ((+(arr_0 [i_0]))))) - (4477616297584171131ULL))))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 8; i_2 += 2) 
            {
                for (int i_3 = 2; i_3 < 9; i_3 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((var_8) & (var_0)))) >= (arr_0 [i_0])));
                        var_23 = (-(((/* implicit */int) ((unsigned char) arr_6 [i_0] [i_0] [3] [i_0]))));
                        var_24 &= ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) 3173794834352098690ULL)) ? (((/* implicit */unsigned long long int) var_16)) : (var_13))) <= (0ULL)))) % (var_16)));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
        {
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3173794834352098673ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(var_1)))) && ((!(((/* implicit */_Bool) var_18)))))))) : (min((((/* implicit */unsigned long long int) var_1)), (min((0ULL), (((/* implicit */unsigned long long int) arr_4 [i_0]))))))));
            arr_11 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_4])) ? ((~(((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
        }
        var_26 = ((/* implicit */signed char) arr_6 [i_0] [i_0] [i_0] [i_0]);
    }
    var_27 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) <= (min((-3592127527250706457LL), (((/* implicit */long long int) -1)))))));
}
