/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105922
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0 + 1] = ((/* implicit */unsigned int) (((_Bool)0) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (short)9518)))));
        arr_3 [i_0 - 2] = ((/* implicit */signed char) min((3823858178U), (964056268U)));
    }
    for (unsigned int i_1 = 3; i_1 < 11; i_1 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    {
                        var_17 = ((/* implicit */int) max((var_3), (((/* implicit */unsigned long long int) 9182893368843397177LL))));
                        var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_7))));
                    }
                } 
            } 
        } 
        arr_16 [i_1] = ((/* implicit */short) max((min((arr_8 [2LL] [i_1 - 3] [i_1]), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)238)) != (((/* implicit */int) var_14))))))), (((/* implicit */unsigned short) (signed char)0))));
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) > (max((((/* implicit */unsigned long long int) (short)9517)), (5037757511337090526ULL)))));
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (+(min((((/* implicit */long long int) arr_9 [i_1] [i_1 - 2])), (arr_4 [i_1 - 1]))))))));
        var_21 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_14 [2ULL] [2ULL] [i_1])) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) : ((((_Bool)0) ? (((/* implicit */long long int) var_16)) : (var_8))))), (((/* implicit */long long int) (signed char)-59))));
    }
    for (long long int i_5 = 0; i_5 < 19; i_5 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 3) 
        {
            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((int) (signed char)-108)))));
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 15; i_7 += 3) 
            {
                for (unsigned int i_8 = 0; i_8 < 19; i_8 += 4) 
                {
                    {
                        var_23 = ((/* implicit */short) (((_Bool)1) ? (arr_17 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned short)5027))))));
                        var_24 -= ((/* implicit */unsigned long long int) ((signed char) ((((3380862152337509199LL) > (arr_19 [i_5]))) ? (arr_17 [i_8]) : (((((/* implicit */_Bool) (signed char)51)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)58))) : (3330911027U))))));
                    }
                } 
            } 
        }
        arr_28 [i_5] = ((/* implicit */signed char) ((((/* implicit */long long int) -584281987)) / ((+(-2080158562057926442LL)))));
        /* LoopNest 2 */
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            for (signed char i_10 = 0; i_10 < 19; i_10 += 1) 
            {
                {
                    var_25 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)-59)) * (((/* implicit */int) var_1))))) : (arr_19 [i_9])));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 2) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_20 [i_9 - 1]))) ? (((((/* implicit */int) (short)-14089)) ^ (((/* implicit */int) min((arr_22 [i_9] [9LL]), (((/* implicit */short) (_Bool)1))))))) : ((-(((/* implicit */int) var_15))))));
                        arr_36 [i_9] [i_5] = ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)-58)), (arr_22 [i_9 - 1] [i_9 - 1])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)200))))) : (((unsigned int) (short)-9517)));
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 2) /* same iter space */
                    {
                        arr_39 [i_12] |= ((/* implicit */signed char) (((!(((/* implicit */_Bool) max((((/* implicit */long long int) 81947623U)), (-6546468429184787210LL)))))) && (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (var_12) : (var_0)))))));
                        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) var_8))));
                        arr_40 [i_5] [i_10] [i_10] [11ULL] = ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_5] [i_5] [18ULL])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)72))) / (2421524918U)))) : (max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) arr_19 [i_12])) : (arr_26 [i_5] [i_9] [i_5] [i_5]))), (max((((/* implicit */unsigned long long int) (signed char)51)), (7139233617070362373ULL))))));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 2) /* same iter space */
                    {
                        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))) ? ((-(arr_33 [i_5] [i_5] [i_5] [i_5]))) : (((/* implicit */unsigned long long int) arr_24 [i_9] [i_9 - 1] [i_9 - 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_9 - 1]))) <= (var_11))))) : (((((/* implicit */_Bool) var_9)) ? (1873442377U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_10] [i_10] [i_10])))))));
                        arr_44 [i_5] [i_9] [i_13] [i_13] &= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((short) arr_30 [i_9 - 1]))), (((((/* implicit */_Bool) max((arr_19 [11LL]), (((/* implicit */long long int) (unsigned short)43892))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_43 [i_13])) ? (((/* implicit */int) (signed char)-37)) : (((/* implicit */int) (unsigned char)135))))) : (max((((/* implicit */unsigned long long int) arr_22 [i_5] [i_5])), (var_11)))))));
                    }
                }
            } 
        } 
    }
    var_29 -= ((/* implicit */short) var_11);
}
