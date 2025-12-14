/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155819
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_14 = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
        arr_2 [i_0] = ((/* implicit */unsigned short) ((unsigned char) var_6));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_15 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)100)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)164)) ? (((/* implicit */int) (signed char)-112)) : (215065737)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)104)))))))) : ((~(arr_3 [11])))));
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) -721203772);
        arr_6 [i_1 - 1] = min((((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1])), (((((var_11) + (2147483647))) >> (((arr_3 [i_1]) - (518736983U))))));
        var_16 = ((/* implicit */unsigned char) 10945416908213549134ULL);
    }
    /* vectorizable */
    for (long long int i_2 = 2; i_2 < 14; i_2 += 4) 
    {
        arr_10 [i_2 - 2] = ((/* implicit */unsigned char) ((signed char) arr_7 [i_2]));
        var_17 = ((/* implicit */unsigned char) ((unsigned long long int) arr_7 [(unsigned short)9]));
        arr_11 [10] [i_2] = ((/* implicit */_Bool) 721203771);
        arr_12 [(unsigned char)0] [i_2] = ((/* implicit */unsigned long long int) var_4);
    }
    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_4 = 2; i_4 < 15; i_4 += 4) 
        {
            arr_19 [i_4] = -721203771;
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 13; i_5 += 4) 
            {
                for (unsigned int i_6 = 0; i_6 < 16; i_6 += 1) 
                {
                    for (int i_7 = 0; i_7 < 16; i_7 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_14 [(signed char)14]))));
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_4 - 1] [i_4 - 2] [i_5 + 1])) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-112))) : (11017450892567655601ULL))) : (((/* implicit */unsigned long long int) -721203772))))) ? (((var_0) ^ (((/* implicit */int) ((short) arr_16 [i_6] [4LL]))))) : (((int) (signed char)10))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned long long int i_8 = 1; i_8 < 15; i_8 += 4) /* same iter space */
        {
            arr_30 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_28 [i_3] [i_3] [i_8])) ? (arr_28 [i_3] [i_8] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)71)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)56407))));
        }
        for (unsigned long long int i_9 = 1; i_9 < 15; i_9 += 4) /* same iter space */
        {
            arr_34 [i_9 + 1] [i_3] [i_3] = ((/* implicit */int) (!(((_Bool) (!(((/* implicit */_Bool) var_13)))))));
            arr_35 [i_3] [i_3] [14ULL] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) max(((unsigned short)511), (((/* implicit */unsigned short) (unsigned char)93))))) ? ((-(var_0))) : (((/* implicit */int) max((arr_26 [i_3] [i_3] [i_9]), (((/* implicit */unsigned char) var_12))))))));
            var_21 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_10)) ? (max((((/* implicit */long long int) -1898708204)), (arr_13 [i_3]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-52)) : (((/* implicit */int) var_5)))))))));
            arr_36 [i_9] = var_8;
        }
        var_22 = ((/* implicit */int) max((((/* implicit */unsigned int) -778853654)), (((((/* implicit */_Bool) -215065737)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-38))) : (((1299609491U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) 6025171601117593318ULL)) ? (arr_20 [i_3] [i_3] [i_3]) : (16464101202805177817ULL)))));
        var_24 -= var_1;
    }
    var_25 += ((((/* implicit */_Bool) (unsigned char)212)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1898708203)) ? (var_0) : (((/* implicit */int) var_5))))) ? (max((var_11), (var_4))) : (((/* implicit */int) var_8)))) : (((/* implicit */int) (unsigned char)172)));
}
