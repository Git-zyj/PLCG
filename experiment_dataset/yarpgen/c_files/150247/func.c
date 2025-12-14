/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150247
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
    var_12 = ((((/* implicit */_Bool) ((unsigned int) (unsigned short)51847))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((((((/* implicit */int) var_4)) + (2147483647))) >> (((((/* implicit */int) var_5)) - (5675))))))))) : (var_1));
    var_13 = ((/* implicit */unsigned int) max((((long long int) var_6)), (((/* implicit */long long int) ((int) var_2)))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 1; i_2 < 6; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        {
                            arr_13 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) arr_5 [i_1] [i_2 - 1] [i_4]);
                            var_14 ^= arr_0 [i_0];
                            var_15 = ((/* implicit */unsigned int) ((var_11) >> (((/* implicit */int) arr_5 [i_2 + 4] [i_2 + 2] [i_2]))));
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_10))) - (var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_5)))) : (-7741836726276421046LL)));
                        }
                    } 
                } 
            } 
            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)65535))));
        }
        for (unsigned int i_5 = 0; i_5 < 10; i_5 += 4) 
        {
            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) ((unsigned int) arr_10 [i_0] [i_0] [i_0] [i_5] [i_5])))) ? (((unsigned int) min((var_0), (((/* implicit */long long int) (short)32766))))) : (((unsigned int) var_3))));
            arr_17 [i_0] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((int) 3358653234U));
        }
        for (long long int i_6 = 0; i_6 < 10; i_6 += 3) 
        {
            /* LoopNest 3 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (short i_8 = 0; i_8 < 10; i_8 += 2) 
                {
                    for (unsigned int i_9 = 0; i_9 < 10; i_9 += 3) 
                    {
                        {
                            var_19 *= ((/* implicit */unsigned long long int) (((+(min((((/* implicit */long long int) var_10)), (arr_21 [i_0] [i_0] [i_0] [i_0]))))) + ((~(-4634985140809988031LL)))));
                            var_20 = ((/* implicit */unsigned int) var_6);
                        }
                    } 
                } 
            } 
            var_21 &= ((/* implicit */short) (~(((((unsigned int) var_2)) ^ (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) ^ (0U)))))));
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_22 = ((/* implicit */unsigned int) (short)15188);
            var_23 = max((((/* implicit */unsigned int) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_10))))), (max((((/* implicit */unsigned int) arr_18 [i_10] [i_10])), (max((((/* implicit */unsigned int) (short)-12587)), (1439731185U))))));
        }
        arr_31 [i_0] = ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) 3758002089U))))), ((~((~(((/* implicit */int) var_4))))))));
    }
    for (short i_11 = 0; i_11 < 10; i_11 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned int) var_2);
        /* LoopSeq 1 */
        for (unsigned int i_12 = 1; i_12 < 7; i_12 += 1) 
        {
            var_25 = ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10)))) + (((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_29 [i_11]))))) > (max((85074828U), (((/* implicit */unsigned int) (short)-17044))))))));
            /* LoopNest 3 */
            for (unsigned long long int i_13 = 1; i_13 < 9; i_13 += 2) 
            {
                for (long long int i_14 = 1; i_14 < 8; i_14 += 4) 
                {
                    for (unsigned short i_15 = 1; i_15 < 8; i_15 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */short) 3868683472U);
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_18 [i_12] [i_12]))) ? ((-(((/* implicit */int) arr_18 [i_12] [i_12])))) : (((((/* implicit */int) arr_18 [i_12] [i_12 + 3])) + (((/* implicit */int) arr_18 [i_12] [i_15]))))));
                        }
                    } 
                } 
            } 
        }
    }
    for (long long int i_16 = 2; i_16 < 9; i_16 += 2) 
    {
        var_28 = (-(var_1));
        var_29 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_46 [i_16 + 2] [i_16 - 1])))))));
    }
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        var_30 &= ((/* implicit */int) (~((~(var_9)))));
        var_31 ^= ((/* implicit */unsigned short) (-((~(arr_48 [i_17])))));
        var_32 -= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((min((arr_51 [i_17]), (1319430076U))) << (((arr_50 [i_17] [i_17]) - (2151200818U)))))) >= (var_1)));
    }
    var_33 ^= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((0ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((var_11) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
}
