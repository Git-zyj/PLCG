/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100848
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 9; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_10))) ? ((~(arr_1 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                    var_20 ^= ((/* implicit */unsigned long long int) var_1);
                }
            } 
        } 
        var_21 |= ((/* implicit */unsigned short) (~(1398582679)));
        /* LoopSeq 1 */
        for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            arr_9 [i_0] [i_3] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_3 [(short)7] [i_3] [i_0])))) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) arr_6 [i_0] [i_3])) ? (((/* implicit */int) arr_7 [9U] [i_3])) : (((/* implicit */int) var_7))))));
            var_22 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) == (((((/* implicit */_Bool) 6747227117832485378LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))));
            var_23 = ((/* implicit */_Bool) var_14);
        }
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_24 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)36666)) == (((/* implicit */int) var_13))))) | (((/* implicit */int) ((6747227117832485384LL) == (-6747227117832485397LL))))))), (((((/* implicit */_Bool) ((signed char) 2560186842729071670ULL))) ? ((+(arr_11 [i_4] [i_4]))) : (((/* implicit */unsigned long long int) arr_13 [i_4] [i_4]))))));
        /* LoopSeq 1 */
        for (int i_5 = 2; i_5 < 19; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_25 = ((/* implicit */signed char) var_13);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_8 = 3; i_8 < 21; i_8 += 3) 
                        {
                            var_26 = ((/* implicit */_Bool) 2560186842729071677ULL);
                            var_27 *= ((/* implicit */_Bool) (-(((/* implicit */int) ((arr_14 [i_5] [16LL] [16LL]) <= (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4] [i_4]))))))));
                        }
                        var_28 = ((/* implicit */int) var_6);
                        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_4] [i_7] [22LL] [i_7]))) : (var_17))) + (((/* implicit */unsigned int) ((/* implicit */int) ((15886557230980479941ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))))) ? (((((/* implicit */_Bool) ((unsigned long long int) 1612202292U))) ? (((/* implicit */int) ((unsigned char) -2849170928749711735LL))) : (((/* implicit */int) ((unsigned char) -973768493883414306LL))))) : (((/* implicit */int) var_3)))))));
                    }
                } 
            } 
            var_30 = ((/* implicit */unsigned long long int) ((((int) ((((/* implicit */_Bool) arr_27 [i_4] [i_4] [i_5] [i_5])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))) % (((/* implicit */int) ((short) arr_23 [i_4] [i_5 + 4] [i_5] [i_4])))));
            var_31 = ((/* implicit */short) (unsigned short)48389);
            arr_28 [i_4] = ((/* implicit */unsigned int) ((((int) (~(16269410666456083043ULL)))) >= (((((/* implicit */_Bool) 2147483647)) ? ((~(((/* implicit */int) var_2)))) : (((/* implicit */int) arr_12 [i_5 - 1] [i_4]))))));
        }
        /* LoopNest 3 */
        for (unsigned int i_9 = 0; i_9 < 23; i_9 += 2) 
        {
            for (signed char i_10 = 0; i_10 < 23; i_10 += 3) 
            {
                for (unsigned short i_11 = 2; i_11 < 22; i_11 += 1) 
                {
                    {
                        var_32 = ((/* implicit */unsigned short) (-(((unsigned int) var_4))));
                        arr_36 [2LL] [(_Bool)1] [i_4] [i_11] [i_10] = ((/* implicit */_Bool) arr_20 [i_4] [i_4] [i_10] [i_11]);
                    }
                } 
            } 
        } 
    }
    var_33 = ((/* implicit */int) ((((min((((/* implicit */unsigned long long int) (unsigned short)26612)), (9608791518587472610ULL))) >> (((/* implicit */int) var_12)))) != (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) var_3)))), (((((/* implicit */int) var_0)) / (((/* implicit */int) (signed char)-1)))))))));
    /* LoopNest 2 */
    for (int i_12 = 3; i_12 < 16; i_12 += 1) 
    {
        for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 2) 
        {
            {
                var_34 |= ((/* implicit */unsigned short) min(((~(2560186842729071666ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_4)))) - (((((/* implicit */int) var_16)) / (((/* implicit */int) (signed char)3)))))))));
                var_35 &= ((/* implicit */_Bool) min(((+(((((/* implicit */_Bool) arr_15 [i_13])) ? (arr_13 [(_Bool)1] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))))))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_0)))))));
            }
        } 
    } 
}
