/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155155
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (((/* implicit */long long int) (-(((/* implicit */int) min(((unsigned char)25), (((/* implicit */unsigned char) (_Bool)1)))))))) : (var_14)));
        var_17 = min((-343600918106281610LL), (((/* implicit */long long int) (_Bool)1)));
    }
    for (long long int i_1 = 3; i_1 < 7; i_1 += 4) 
    {
        arr_4 [i_1] = min((((((3607862770200758162LL) % (((/* implicit */long long int) ((/* implicit */int) var_3))))) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (3607862770200758162LL));
        var_18 = ((/* implicit */unsigned long long int) (-(-5010784380974334393LL)));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) == (var_2)));
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (arr_6 [i_2])));
            var_21 = ((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (arr_5 [i_1 - 3]) : ((-(var_4))));
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) /* same iter space */
        {
            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_8) ? (arr_0 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (arr_9 [i_1 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3])))));
            var_23 = ((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_3]))));
            var_24 = ((/* implicit */unsigned int) ((_Bool) arr_8 [i_3]));
        }
        var_25 = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_5 [i_1]))) << (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [10ULL])) && (((/* implicit */_Bool) var_3)))))));
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_2 [i_1 + 3] [i_1 - 3]), (arr_2 [i_1 - 2] [i_1 + 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 751253895353500367ULL)))))) : (max((arr_9 [i_1 - 3]), (arr_9 [i_1 - 1])))));
    }
    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 1) 
    {
        var_27 = ((/* implicit */unsigned char) var_5);
        arr_13 [(unsigned char)4] |= ((/* implicit */unsigned int) var_1);
        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_14)) ? (751253895353500367ULL) : (((/* implicit */unsigned long long int) arr_11 [i_4])))) : (((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */unsigned long long int) 20LL)) : (arr_12 [i_4])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((var_15), (var_15))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_4])))))));
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_29 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_11 [i_5])) ^ (var_2)));
        var_30 = ((/* implicit */unsigned int) ((1034361153941468704LL) << (((/* implicit */int) (_Bool)1))));
        var_31 &= (_Bool)1;
    }
    /* LoopNest 3 */
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        for (unsigned long long int i_7 = 2; i_7 < 23; i_7 += 1) 
        {
            for (unsigned int i_8 = 0; i_8 < 24; i_8 += 1) 
            {
                {
                    var_32 = ((/* implicit */long long int) min((max((var_4), (((/* implicit */unsigned long long int) arr_18 [i_6])))), (((/* implicit */unsigned long long int) ((unsigned int) var_15)))));
                    var_33 += ((/* implicit */long long int) ((((/* implicit */_Bool) 14007614571384798854ULL)) ? (18250710016727322592ULL) : (17695490178356051248ULL)));
                }
            } 
        } 
    } 
}
