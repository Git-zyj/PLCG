/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11693
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
    for (unsigned long long int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) max(((short)1), ((short)11305)))), (((((/* implicit */_Bool) var_5)) ? (arr_4 [i_0] [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))));
                var_16 = min((274372239713053021LL), (((/* implicit */long long int) (((!(((/* implicit */_Bool) 0U)))) && (((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */int) (short)29486)))))))));
                arr_7 [i_0] = ((/* implicit */int) (unsigned short)52007);
                var_17 += ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 18446744073709551599ULL)) || (((/* implicit */_Bool) (short)0)))))) ^ (((((/* implicit */_Bool) (signed char)-45)) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_1 + 2])) : (((/* implicit */int) arr_1 [i_0 - 1] [i_1 - 1]))))));
                arr_8 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-25778))))) ? (arr_4 [i_0 + 2] [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 1])))))) ? (((/* implicit */int) (_Bool)1)) : (arr_0 [i_1])));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            arr_15 [i_3] [i_3] = ((/* implicit */unsigned int) (!(((min((arr_0 [12]), (((/* implicit */int) (unsigned short)52143)))) > (max((arr_5 [i_3]), (((/* implicit */int) (short)32767))))))));
            var_18 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3])) ? (arr_5 [i_2]) : (((/* implicit */int) arr_10 [i_3]))))));
            var_19 = ((/* implicit */short) arr_4 [i_2] [i_3] [i_3]);
        }
        /* vectorizable */
        for (short i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            var_20 = ((/* implicit */int) ((unsigned int) 72057594037927872ULL));
            /* LoopNest 3 */
            for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 2) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */int) var_14);
                            var_22 = ((/* implicit */unsigned short) 2045978349);
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_8 = 1; i_8 < 9; i_8 += 4) 
        {
            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (((+(((/* implicit */int) ((((/* implicit */int) arr_10 [i_8])) < (604195786)))))) == (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_25 [i_2] [i_8] [(_Bool)1] [i_8] [i_8 + 1])), (18374686479671623744ULL)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-109)), ((unsigned short)42822)))) : ((+(((/* implicit */int) arr_25 [i_2] [i_2] [i_8 + 1] [i_8] [i_8])))))))))));
            arr_28 [i_8] = ((/* implicit */unsigned long long int) (+(max((0U), (((/* implicit */unsigned int) arr_5 [i_8 - 1]))))));
            arr_29 [i_8] = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_12 [i_8 + 1] [i_8 + 1])) ? (((((/* implicit */_Bool) 72057594037927872ULL)) ? (14529926133180238521ULL) : (9156346004756078661ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18374686479671623743ULL))))))))));
        }
        var_24 = ((/* implicit */int) max((var_24), (arr_12 [i_2] [i_2])));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 13; i_9 += 1) 
    {
        var_25 = ((/* implicit */short) arr_0 [i_9]);
        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) 3916817940529313094ULL)) ? (13248819318692096639ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        var_27 *= (((-(arr_6 [i_9] [i_9] [i_9]))) != (((/* implicit */int) arr_31 [i_9] [i_9])));
    }
}
