/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161246
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (-(max((((/* implicit */long long int) var_13)), (-655846454907456881LL))))))));
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)242)) ? (((/* implicit */int) (unsigned char)18)) : (((/* implicit */int) (signed char)-17))))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (long long int i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    for (short i_4 = 0; i_4 < 17; i_4 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */int) (-(((var_8) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                            var_20 = ((/* implicit */unsigned char) min((var_20), (var_7)));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) 13887126238510821363ULL)) && (((/* implicit */_Bool) 13887126238510821357ULL))));
        }
        /* LoopNest 3 */
        for (long long int i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            for (short i_6 = 0; i_6 < 17; i_6 += 2) 
            {
                for (short i_7 = 2; i_7 < 15; i_7 += 3) 
                {
                    {
                        var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_13))) ? (((((/* implicit */_Bool) 13887126238510821357ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (13887126238510821379ULL))) : (((/* implicit */unsigned long long int) ((int) (unsigned char)120))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 4; i_8 < 14; i_8 += 3) 
                        {
                            var_23 += ((/* implicit */short) ((((((/* implicit */_Bool) -6367647919234545575LL)) ? (6367647919234545575LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21319))))) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 13887126238510821356ULL))))))));
                            arr_25 [i_0] [i_8] [i_0] [i_7 - 2] [i_6] &= ((/* implicit */int) (+(((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_16)) : (4559617835198730258ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                            var_24 = ((/* implicit */unsigned char) ((_Bool) min((((/* implicit */long long int) (short)-27324)), (-6367647919234545575LL))));
                        }
                        /* LoopSeq 2 */
                        for (long long int i_9 = 0; i_9 < 17; i_9 += 4) /* same iter space */
                        {
                            var_25 = ((/* implicit */int) min((var_25), ((+(((/* implicit */int) var_11))))));
                            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 27021597764222976LL))))) < (((((/* implicit */_Bool) 888065777U)) ? (((/* implicit */int) (short)27318)) : (((/* implicit */int) var_1))))))) << (((((/* implicit */int) var_11)) - (((/* implicit */int) ((signed char) var_11))))))))));
                            var_27 = ((/* implicit */_Bool) 274877906943ULL);
                            arr_28 [i_9] [i_9] [i_5] [i_0] [i_0] = (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)19)) && (((/* implicit */_Bool) (unsigned short)18600))))));
                        }
                        for (long long int i_10 = 0; i_10 < 17; i_10 += 4) /* same iter space */
                        {
                            var_28 -= ((/* implicit */int) var_7);
                            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) 274877906943ULL)) ? (-1LL) : (-6367647919234545575LL)))))));
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_15), (((/* implicit */unsigned short) var_9))))) ? (((((/* implicit */_Bool) ((short) (unsigned short)25095))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (max((var_6), (((/* implicit */long long int) var_3)))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_6)))));
                        }
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 2) 
    {
        var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) / (((/* implicit */int) var_13))));
        var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (3406901497U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
        var_33 = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) <= ((-(((/* implicit */int) (unsigned short)12731))))));
        var_34 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)25095))));
    }
    var_35 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_0))));
}
