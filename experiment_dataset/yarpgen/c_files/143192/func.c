/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143192
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
    var_14 = ((/* implicit */long long int) (~(((/* implicit */int) var_5))));
    var_15 -= ((/* implicit */unsigned short) ((((/* implicit */int) var_12)) % (((/* implicit */int) max((((var_8) > (((/* implicit */long long int) ((/* implicit */int) var_5))))), (max((var_10), (var_1))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) var_7))));
        arr_2 [i_0] = ((((/* implicit */long long int) min((-247673700), (((/* implicit */int) (_Bool)1))))) != (var_6));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [i_0]) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)49838)))))))) ? (((/* implicit */int) arr_1 [i_0])) : ((-(((/* implicit */int) arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) arr_3 [i_1]);
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_0))));
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    {
                        var_19 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (229376))))));
                        var_20 = ((/* implicit */unsigned short) ((var_13) ? (var_9) : (((((/* implicit */_Bool) arr_9 [i_1] [i_2] [15ULL])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_9 [i_1] [i_1] [(short)22]))))));
                    }
                } 
            } 
            var_21 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_1]))));
        }
        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */int) var_0);
            arr_15 [i_1] [i_5] = ((((/* implicit */_Bool) arr_11 [i_1])) ? (arr_7 [i_1] [i_1] [i_5]) : (((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_1])) | (((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [(unsigned char)4] [(unsigned char)4] [i_1]))))));
            arr_16 [i_5] = ((/* implicit */unsigned long long int) var_6);
            arr_17 [i_1] = ((/* implicit */long long int) (((~(((/* implicit */int) var_11)))) + (((((/* implicit */_Bool) (unsigned short)31209)) ? (((/* implicit */int) arr_13 [21ULL])) : (((/* implicit */int) (_Bool)1))))));
        }
    }
    /* LoopSeq 4 */
    for (unsigned short i_6 = 1; i_6 < 19; i_6 += 2) 
    {
        var_23 -= ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
        /* LoopSeq 2 */
        for (unsigned char i_7 = 0; i_7 < 20; i_7 += 2) 
        {
            var_24 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_6 + 1])) ? (((/* implicit */int) arr_21 [i_6 - 1] [i_6 - 1])) : (((/* implicit */int) var_13))))) ? (min(((((_Bool)1) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_2)))), (((/* implicit */int) var_5)))) : (((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_12 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])) * (((/* implicit */int) arr_11 [i_7]))))))));
            var_25 = ((/* implicit */short) (~(((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */long long int) ((/* implicit */int) var_5))) % (var_6)))))));
        }
        for (int i_8 = 0; i_8 < 20; i_8 += 2) 
        {
            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) max((((/* implicit */long long int) var_11)), (var_3))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min((((((/* implicit */int) var_12)) > (((/* implicit */int) arr_4 [i_6 + 1] [i_8])))), ((!(((/* implicit */_Bool) arr_4 [i_6] [i_6])))))))));
            arr_25 [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_6 - 1] [i_6 - 1] [i_6 - 1]))))) >> ((((+(472684323U))) - (472684318U)))))) ? (((/* implicit */int) var_12)) : (((((/* implicit */int) var_5)) * (((/* implicit */int) var_5))))));
        }
        var_27 += ((/* implicit */short) (((!((!(((/* implicit */_Bool) arr_8 [i_6])))))) ? (((((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) arr_6 [i_6] [i_6] [16])) : (var_9)))) ? (arr_19 [0LL]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (var_8))))))))));
        arr_26 [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_18 [i_6]), (arr_18 [i_6]))))));
    }
    for (int i_9 = 2; i_9 < 18; i_9 += 3) 
    {
        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) var_1)), ((+(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) != (471405404U)))), (min(((unsigned short)35252), (((/* implicit */unsigned short) arr_14 [i_9 + 1] [i_9])))))))) : (min((((/* implicit */long long int) arr_8 [i_9 - 1])), (min((var_8), (arr_19 [16]))))))))));
        arr_30 [i_9 - 2] [i_9 - 2] = ((/* implicit */unsigned short) var_2);
        arr_31 [i_9 + 1] [i_9 - 1] = ((/* implicit */signed char) min(((((-(((/* implicit */int) arr_20 [i_9 - 2] [7ULL])))) + (((((/* implicit */int) arr_18 [(_Bool)1])) - (((/* implicit */int) var_2)))))), ((+(((/* implicit */int) arr_6 [i_9] [i_9] [i_9]))))));
        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((((/* implicit */int) (_Bool)1)) << (((4294967295U) - (4294967271U))))))));
        arr_32 [i_9] [4ULL] = ((/* implicit */signed char) ((unsigned char) (_Bool)1));
    }
    for (int i_10 = 0; i_10 < 21; i_10 += 2) 
    {
        var_30 -= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) min((var_3), (var_6))))))) < (var_9)));
        arr_37 [i_10] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (-(((/* implicit */int) var_2))))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0))));
    }
    for (int i_11 = 0; i_11 < 25; i_11 += 2) 
    {
        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) (!(((((/* implicit */int) arr_41 [i_11])) <= (((/* implicit */int) arr_41 [i_11])))))))));
        arr_42 [i_11] = ((/* implicit */unsigned long long int) arr_40 [i_11] [i_11]);
    }
}
