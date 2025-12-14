/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178665
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((144115187002114048ULL), (12074281978388643385ULL)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) 8039871601726107613ULL)) || ((_Bool)1)))) < (((/* implicit */int) (_Bool)1)))))));
    var_21 = ((/* implicit */int) (((((+(((/* implicit */int) var_1)))) <= (((/* implicit */int) var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : ((((+(var_6))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))))));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (-(arr_0 [i_0 - 2])))) >= (min((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)58111))))), (((((/* implicit */_Bool) (unsigned short)56)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 2] [i_0]))) : (var_12)))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
        {
            var_23 = ((/* implicit */short) (+(((/* implicit */int) var_19))));
            /* LoopNest 2 */
            for (short i_2 = 4; i_2 < 23; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    {
                        var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65280))) & (var_12))))))));
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((unsigned short)49058), (((/* implicit */unsigned short) (_Bool)1))))) ? (min((arr_0 [i_0 + 2]), (var_15))) : (min((var_10), (((/* implicit */int) ((((/* implicit */long long int) arr_0 [i_2 - 3])) < (257698037760LL)))))))))));
                        arr_10 [i_0] [i_3] [11LL] [i_3] [i_2] [i_1] = ((/* implicit */unsigned short) ((min((max((((/* implicit */unsigned long long int) arr_0 [i_1])), (3350953956691357341ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) (unsigned short)64064))))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                    }
                } 
            } 
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)25694)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) || ((_Bool)1))))) : (var_17))))));
        }
        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) /* same iter space */
        {
            arr_14 [i_0 - 1] [i_0 + 2] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))))), (min(((unsigned short)18301), (var_0))))))));
            /* LoopNest 2 */
            for (int i_5 = 4; i_5 < 23; i_5 += 2) 
            {
                for (signed char i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_7 = 3; i_7 < 23; i_7 += 2) 
                        {
                            var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) (-((+(arr_4 [i_0 - 1] [i_0 - 1]))))))));
                            var_28 = ((((/* implicit */_Bool) -268704405156423484LL)) ? (((/* implicit */int) (unsigned short)64064)) : (((/* implicit */int) (_Bool)1)));
                            var_29 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1776)) ? (var_17) : (((/* implicit */long long int) 2147483647)))))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 3) 
                        {
                            var_30 = ((/* implicit */unsigned short) var_15);
                            var_31 = ((unsigned long long int) max((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned short)26784))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) : (1264164698249234755ULL)))));
                        }
                        var_32 = max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_1 [i_5])), (var_14))))) < (arr_4 [i_4] [i_4])))), ((+(((unsigned long long int) var_5)))));
                    }
                } 
            } 
            var_33 = max(((+(max((arr_13 [i_0 + 1] [i_0 + 1] [i_0 + 2]), (((/* implicit */unsigned long long int) (_Bool)1)))))), (((/* implicit */unsigned long long int) max((((long long int) 257698037760LL)), (((/* implicit */long long int) (_Bool)1))))));
            arr_23 [i_0] [i_0] [i_0 + 1] = ((/* implicit */long long int) min((min((arr_20 [12LL] [i_4] [i_4] [20LL] [i_4] [i_0 - 2] [i_0]), (arr_20 [i_0] [i_4] [i_0] [0] [i_4] [i_0 + 1] [i_4]))), (((/* implicit */int) ((((/* implicit */_Bool) ((var_6) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))))) || (((/* implicit */_Bool) ((long long int) var_15))))))));
        }
    }
    /* vectorizable */
    for (unsigned short i_9 = 0; i_9 < 17; i_9 += 4) 
    {
        var_34 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)1471)) || (((((/* implicit */_Bool) arr_24 [i_9] [i_9])) && (((/* implicit */_Bool) (unsigned short)21799))))));
        var_35 = ((/* implicit */signed char) (~((~(((/* implicit */int) var_2))))));
    }
}
