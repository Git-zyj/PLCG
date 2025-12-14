/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148420
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
    var_16 = (((((!(((/* implicit */_Bool) var_6)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_13))))))) ? (((/* implicit */unsigned int) (+((+(((/* implicit */int) var_2))))))) : ((-(((((/* implicit */unsigned int) ((/* implicit */int) var_5))) / (var_4))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) ((unsigned int) (signed char)102));
        arr_4 [i_0] = ((/* implicit */unsigned int) var_10);
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_10 [i_1] [i_1] = ((/* implicit */unsigned short) ((signed char) var_7));
                    /* LoopSeq 3 */
                    for (int i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) || (((/* implicit */_Bool) arr_3 [i_0]))))));
                        var_18 += ((/* implicit */int) ((((/* implicit */int) ((min((arr_0 [i_1]), (((/* implicit */unsigned long long int) var_4)))) == (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1029361296)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_1))))))))));
                        var_19 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_0])), (arr_12 [i_2])));
                    }
                    for (signed char i_4 = 2; i_4 < 15; i_4 += 4) 
                    {
                        arr_18 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_4]))) & (var_11))) != (var_0))))) == ((+(((long long int) var_5))))));
                        arr_19 [i_0] = ((/* implicit */unsigned int) arr_15 [i_2] [i_2 + 2] [i_2] [i_2 - 2] [i_2 + 1]);
                        arr_20 [i_0] = var_8;
                    }
                    for (signed char i_5 = 2; i_5 < 16; i_5 += 1) 
                    {
                        arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((((((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) & (((/* implicit */int) var_6)))), (((/* implicit */int) var_13))));
                        arr_25 [i_2] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((((/* implicit */int) arr_2 [i_0])) | (((/* implicit */int) var_2)))))))));
                    }
                    var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) max((((/* implicit */short) (signed char)118)), ((short)-32355))))));
                    var_21 = ((/* implicit */int) (+(arr_0 [i_2])));
                }
            } 
        } 
    }
    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 4) /* same iter space */
    {
        arr_29 [i_6] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_28 [i_6]))));
        var_22 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (min((4653838404994785630ULL), (((/* implicit */unsigned long long int) arr_7 [i_6])))) : (((/* implicit */unsigned long long int) var_14))))) ? (((/* implicit */unsigned long long int) (((-(var_7))) << (((((/* implicit */int) arr_15 [i_6] [i_6] [i_6] [i_6] [i_6])) >> (((((/* implicit */int) (unsigned short)512)) - (503)))))))) : (((((/* implicit */unsigned long long int) ((var_4) << (((((/* implicit */int) arr_5 [i_6] [i_6] [i_6])) - (58935)))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_6]))) * (var_0)))))));
        arr_30 [i_6] = (~(((/* implicit */int) (signed char)118)));
    }
    for (unsigned int i_7 = 0; i_7 < 18; i_7 += 4) /* same iter space */
    {
        arr_33 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [i_7] [i_7])) ? ((+(((((/* implicit */int) var_2)) + (((/* implicit */int) var_6)))))) : (((/* implicit */int) (short)-32752))));
        /* LoopNest 3 */
        for (signed char i_8 = 1; i_8 < 15; i_8 += 4) 
        {
            for (int i_9 = 0; i_9 < 18; i_9 += 4) 
            {
                for (short i_10 = 2; i_10 < 16; i_10 += 4) 
                {
                    {
                        arr_40 [i_7] [i_7] [i_7] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_17 [i_7] [i_7] [i_7] [i_7] [i_7])) ? (((((/* implicit */_Bool) arr_3 [i_10])) ? (var_4) : (((/* implicit */unsigned int) var_15)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_8] [i_8])))))))) - (arr_32 [i_7] [i_7])));
                        arr_41 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((arr_3 [i_10]) >> (((((/* implicit */int) arr_9 [i_7] [i_7] [i_7])) - (11497)))))) ? (3ULL) : (((/* implicit */unsigned long long int) ((arr_11 [i_7] [i_7] [i_7] [i_7]) >> (((arr_1 [i_10]) + (1443858985)))))))) % (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (+(1029361282)))), ((-(var_14))))))));
                        var_23 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((2124740768U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_8]))))) != (((/* implicit */unsigned int) -1029361269))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (4653838404994785629ULL)))) ? (((((/* implicit */_Bool) 3640562336U)) ? (4433230883192832ULL) : (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) -745578170))))));
                    }
                } 
            } 
        } 
        arr_42 [i_7] = (!(arr_34 [i_7] [i_7]));
    }
    var_24 = ((/* implicit */unsigned long long int) (!(((max((((/* implicit */int) (unsigned short)0)), (var_15))) < (min((var_10), (((/* implicit */int) var_12))))))));
    var_25 = ((/* implicit */signed char) var_11);
    var_26 = ((/* implicit */unsigned int) min(((+(((((/* implicit */int) var_12)) >> (((var_7) + (1827397526))))))), (((/* implicit */int) var_5))));
}
