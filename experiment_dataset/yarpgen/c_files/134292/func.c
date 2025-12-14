/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134292
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
    var_17 = ((/* implicit */unsigned short) var_7);
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_4 [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (_Bool)1)) : (arr_1 [6LL])))) : (((long long int) arr_3 [i_0] [i_1] [i_1]))));
            var_18 = ((/* implicit */unsigned short) 15014475363863655686ULL);
        }
        arr_6 [i_0] = ((/* implicit */_Bool) ((arr_2 [i_0] [i_0]) >> (((arr_2 [i_0] [i_0]) - (6973914913810405037ULL)))));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 13; i_2 += 2) /* same iter space */
    {
        arr_10 [i_2] [i_2] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_2])) ? (arr_1 [i_2]) : (arr_1 [i_2])));
        arr_11 [i_2] = ((((/* implicit */_Bool) ((arr_2 [6U] [i_2]) >> (((arr_0 [i_2] [i_2]) - (850468235)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((1477842426846156005LL) <= (-1477842426846155997LL))))) : (((long long int) -1)));
        arr_12 [i_2] = ((/* implicit */unsigned short) (-(arr_1 [i_2])));
        var_19 = ((/* implicit */short) var_1);
        arr_13 [8] = (-(((/* implicit */int) ((unsigned short) 824599586))));
    }
    for (long long int i_3 = 0; i_3 < 13; i_3 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            for (long long int i_5 = 0; i_5 < 13; i_5 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        for (long long int i_7 = 0; i_7 < 13; i_7 += 4) 
                        {
                            {
                                var_20 -= ((/* implicit */unsigned int) (+((+(-1477842426846156006LL)))));
                                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)-404))) == ((+(min((arr_16 [2U] [i_4] [i_5]), (((/* implicit */long long int) var_11)))))))))));
                            }
                        } 
                    } 
                    var_22 -= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_21 [i_3])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (524287) : (((/* implicit */int) (signed char)-81))))) : (130240048U)))) != (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) / (arr_2 [(_Bool)1] [12])))));
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 4) 
                        {
                            {
                                arr_28 [i_5] = ((((/* implicit */_Bool) -824599579)) ? (((int) ((((/* implicit */_Bool) (short)12037)) ? (517227410) : (((/* implicit */int) (unsigned short)742))))) : (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)13129)) % (((/* implicit */int) (unsigned short)742))))) != ((+(-1LL)))))));
                                arr_29 [i_5] [9] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) var_10))) ? (((/* implicit */int) (((~(((/* implicit */int) (unsigned short)7227)))) != (((((/* implicit */_Bool) -4672969147513910145LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))))) : (2147483629)));
                                arr_30 [i_5] [i_4] [i_5] [i_8] [i_9] [i_9] = min((((/* implicit */long long int) ((signed char) 4806552178767327799LL))), (var_5));
                                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((~(var_7)))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (short)19670))))) ? (((/* implicit */int) arr_17 [i_5])) : ((~(-524296))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_20 [i_8] [i_5] [9U])) ? (arr_16 [2LL] [i_5] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_31 [11] [i_3] = ((/* implicit */long long int) (signed char)-1);
    }
    var_24 = var_4;
    var_25 = ((/* implicit */int) min((-4672969147513910130LL), (((min((var_8), (((/* implicit */long long int) var_0)))) & (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-24)) : (((/* implicit */int) (signed char)-40)))))))));
}
