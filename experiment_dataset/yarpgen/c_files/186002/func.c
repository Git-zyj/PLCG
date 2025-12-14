/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186002
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
    var_10 = ((/* implicit */unsigned short) ((((var_5) + (9223372036854775807LL))) << (((((((/* implicit */int) var_2)) + (83))) - (63)))));
    var_11 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) 1ULL)) ? (-7819921932176492725LL) : (-8391202300568301228LL)));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)39)))) ? ((-(12051364172298920129ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)20))))))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(signed char)10]))))))));
        var_12 ^= ((/* implicit */_Bool) var_7);
        var_13 = ((/* implicit */_Bool) arr_0 [i_0]);
        var_14 ^= ((/* implicit */unsigned long long int) var_5);
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            var_15 = ((/* implicit */unsigned short) min((((arr_1 [i_1 + 2]) << (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [(unsigned short)2] [i_1]))) <= (arr_4 [i_1] [i_0])))))), (min((max((var_8), (12051364172298920125ULL))), (((/* implicit */unsigned long long int) (_Bool)1))))));
            var_16 ^= ((/* implicit */long long int) (-(var_1)));
            var_17 ^= ((/* implicit */_Bool) min((max((var_5), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_1 + 2])))))));
            var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((6395379901410631491ULL) / (((/* implicit */unsigned long long int) (~(7819921932176492750LL)))))) : (((((/* implicit */_Bool) (unsigned char)227)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38386)))))));
            var_19 = ((/* implicit */unsigned long long int) -1);
        }
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 18; i_2 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) var_4))));
        var_21 = ((/* implicit */signed char) arr_3 [i_2] [4U] [i_2]);
        /* LoopNest 3 */
        for (unsigned short i_3 = 1; i_3 < 17; i_3 += 4) 
        {
            for (short i_4 = 2; i_4 < 17; i_4 += 3) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_22 ^= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_2)) ? (6395379901410631487ULL) : (((/* implicit */unsigned long long int) var_5))))));
                            arr_17 [i_3] [i_3] [i_3] [i_5] [i_6] [i_6] = ((/* implicit */signed char) (~(arr_5 [i_3 - 1] [i_4 + 1])));
                        }
                        var_23 ^= ((/* implicit */short) (~(((/* implicit */int) arr_6 [i_4 - 2]))));
                        var_24 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) != (arr_11 [i_2] [i_2] [i_2] [i_2])));
                        arr_18 [i_2] [i_3] [i_4 + 1] [i_3] [i_5] = ((((/* implicit */_Bool) arr_1 [i_3 + 1])) ? (((arr_12 [i_2]) ? (var_8) : (arr_5 [i_4 - 2] [i_2]))) : (((/* implicit */unsigned long long int) (+(var_5)))));
                    }
                } 
            } 
        } 
        var_25 = (+(var_8));
    }
    for (short i_7 = 0; i_7 < 18; i_7 += 2) /* same iter space */
    {
        arr_22 [i_7] = ((/* implicit */unsigned short) arr_0 [i_7]);
        var_26 ^= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_7])) ? (arr_10 [i_7]) : (((/* implicit */unsigned long long int) var_1))))) ? (((((/* implicit */_Bool) var_8)) ? (var_5) : (var_9))) : (((/* implicit */long long int) ((/* implicit */int) max((var_4), (var_4))))))));
    }
}
