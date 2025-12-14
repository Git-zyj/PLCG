/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159819
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            var_13 = var_0;
            var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) (unsigned short)7680)) ? (-1970534980) : (((/* implicit */int) (short)-1))))))) ? (((((/* implicit */_Bool) var_2)) ? (((arr_3 [i_1 - 1] [(_Bool)1] [i_0]) ? (((/* implicit */unsigned long long int) arr_1 [(unsigned char)0])) : (8258867487934340601ULL))) : (((/* implicit */unsigned long long int) arr_1 [(_Bool)1])))) : (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (_Bool)1))))))))))));
            var_15 = ((/* implicit */signed char) ((((((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_0] [i_0] [i_1 + 1]))))) < (1790918433855574419LL))) ? (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_7)) ? (-2147483633) : (((/* implicit */int) var_11))))))) : (-3397636941300771742LL)));
            var_16 = ((/* implicit */unsigned char) arr_1 [i_0]);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (signed char i_4 = 3; i_4 < 19; i_4 += 1) 
                {
                    {
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_5)) : (var_8)));
                        arr_12 [i_0] [i_2] [i_3 - 1] [i_4 + 2] = ((/* implicit */unsigned int) (unsigned short)58586);
                        var_18 *= ((/* implicit */_Bool) ((arr_3 [i_0] [(signed char)6] [i_4]) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)8184)) : (((/* implicit */int) (unsigned char)241))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) (signed char)73))))) : (((unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_4 - 1])))));
                    }
                } 
            } 
            arr_13 [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-7109)))), (arr_1 [i_0])));
            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) 134217727U)) ? (((int) var_7)) : (((/* implicit */int) arr_9 [i_0] [i_2]))));
            var_20 = (_Bool)1;
        }
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((long long int) var_0)))));
        arr_14 [i_0] [i_0] = ((/* implicit */_Bool) (unsigned char)206);
    }
    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_10 [i_5] [i_5] [i_5] [i_5] [i_5])) ? ((-(var_5))) : (((((/* implicit */int) (signed char)100)) >> (((((/* implicit */int) (short)23013)) - (23007))))))));
        var_23 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)97)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_5])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_10 [i_5] [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) (_Bool)1)) : (0))) : (((/* implicit */int) max((var_3), (((/* implicit */unsigned short) arr_11 [i_5] [i_5])))))))) : (((((/* implicit */_Bool) min(((unsigned char)197), (arr_15 [i_5])))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
    }
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 16; i_6 += 4) /* same iter space */
    {
        var_24 = ((/* implicit */signed char) (unsigned short)7680);
        var_25 *= (-(13ULL));
    }
    /* vectorizable */
    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    var_26 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_1 [i_7])))) ? ((+(((/* implicit */int) arr_26 [i_7] [i_7] [i_9] [(short)5])))) : ((~(((/* implicit */int) (signed char)8))))));
                    /* LoopNest 2 */
                    for (signed char i_10 = 1; i_10 < 13; i_10 += 4) 
                    {
                        for (signed char i_11 = 0; i_11 < 16; i_11 += 4) 
                        {
                            {
                                arr_34 [i_7] [i_7] [i_10] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11834543892511846314ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)14))))) ? (((((/* implicit */_Bool) arr_0 [i_7])) ? (((/* implicit */int) arr_5 [i_11])) : (((/* implicit */int) arr_15 [i_9])))) : (((/* implicit */int) (unsigned char)245)));
                                arr_35 [i_10] [i_10 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((var_9) / (-4861266952071673173LL))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_23 [14] [i_8]))))));
                                var_27 = var_1;
                                var_28 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_10 + 1] [i_10 + 1])) ? (17979214137393152ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13085)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_29 &= ((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_7] [i_7])) * (((/* implicit */int) (_Bool)1))));
        var_30 = ((/* implicit */signed char) (_Bool)1);
    }
    var_31 = ((/* implicit */unsigned int) 7162653141575206408ULL);
    var_32 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) (signed char)80)) : (((/* implicit */int) (unsigned short)0))))));
}
