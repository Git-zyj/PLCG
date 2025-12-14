/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169391
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
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */int) max((var_18), (var_12)))) != (((/* implicit */int) var_2)))))));
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-85)) : (1790483959)))))) : (((long long int) max((((/* implicit */unsigned short) (short)23604)), (var_12))))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) max((var_6), ((signed char)-19)))) ? (((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) (unsigned short)13725))))) : (max((var_14), (((/* implicit */int) var_12))))))) % (((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)5501)), ((-2147483647 - 1))))) ? (((((/* implicit */_Bool) var_4)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_10)) : (var_17))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)52019)))))));
            var_23 += ((/* implicit */short) ((((/* implicit */int) var_0)) == (((/* implicit */int) (unsigned short)60024))));
        }
        var_24 ^= ((/* implicit */int) ((arr_0 [i_0]) & (((/* implicit */long long int) ((/* implicit */int) var_1)))));
        var_25 += ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [(short)9])) && (((/* implicit */_Bool) var_2))))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
    }
    for (int i_2 = 0; i_2 < 13; i_2 += 2) /* same iter space */
    {
        arr_6 [i_2] [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 769535225)) ? (((/* implicit */int) var_10)) : (var_14)))))))));
        var_26 += ((/* implicit */unsigned short) min(((~(arr_5 [(unsigned short)6] [i_2]))), (max((var_17), (((/* implicit */int) var_2))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_10 [i_3] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (_Bool)1)) : (2147483647)))));
        var_27 = ((/* implicit */int) min((var_27), ((+((((_Bool)0) ? (arr_1 [i_3]) : (((/* implicit */int) arr_4 [(unsigned char)7]))))))));
    }
    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_5 = 0; i_5 < 15; i_5 += 1) 
        {
            arr_18 [12] [i_4] = ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (unsigned short)17709)) : (769479319));
            var_28 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)23604)) ? (-7632661822229086959LL) : (((/* implicit */long long int) 70392053))))) ? (((/* implicit */int) min(((unsigned short)47827), (((/* implicit */unsigned short) var_9))))) : (((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */int) var_1)) : (1825416824))))));
        }
        /* LoopNest 3 */
        for (unsigned short i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            for (long long int i_7 = 0; i_7 < 15; i_7 += 2) 
            {
                for (long long int i_8 = 2; i_8 < 14; i_8 += 1) 
                {
                    {
                        arr_26 [i_4] [i_6] [i_7] [i_4] = ((signed char) (signed char)105);
                        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) max((max((((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)67))) : (var_7))), (((/* implicit */long long int) min((var_2), (var_4)))))), (((((((/* implicit */_Bool) 2084568535)) ? (-9223372036854775807LL) : (((/* implicit */long long int) 1299964737)))) / (((/* implicit */long long int) var_3)))))))));
                        var_30 ^= ((/* implicit */_Bool) max((((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-48))))), ((signed char)103)));
                    }
                } 
            } 
        } 
    }
}
