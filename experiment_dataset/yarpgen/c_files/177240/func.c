/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177240
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
    var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)23403))));
    var_18 += ((/* implicit */int) (signed char)76);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) 2359855472550880520LL);
        var_20 = ((/* implicit */unsigned char) min((-2359855472550880520LL), (((-2359855472550880514LL) % (((/* implicit */long long int) 3U))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (short)32362))));
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) (-(min((3LL), (4LL)))));
                        arr_11 [i_0] [i_0] [i_0] [i_2] [i_2] [1LL] = ((/* implicit */unsigned char) ((signed char) (~(3U))));
                        var_23 += (+(min(((+(-5LL))), (((/* implicit */long long int) 3U)))));
                        var_24 = ((/* implicit */unsigned long long int) (-(max((((/* implicit */unsigned int) arr_9 [i_0] [i_2] [i_0] [i_0])), (4292584576U)))));
                    }
                } 
            } 
        }
        var_25 = ((/* implicit */long long int) ((342498175289589544LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)249)))));
        arr_12 [13] [5U] = ((/* implicit */unsigned long long int) 342498175289589567LL);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 10; i_4 += 4) 
    {
        /* LoopSeq 3 */
        for (short i_5 = 0; i_5 < 10; i_5 += 4) 
        {
            var_26 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) (signed char)-26))))));
            var_27 = ((/* implicit */_Bool) (unsigned char)249);
            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)0) ? (342498175289589567LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32377)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1))))))) : (-8009466147337268428LL))))));
            var_29 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [(_Bool)1] [i_4] [i_4] [i_4]))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 1) 
        {
            var_30 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */long long int) arr_18 [i_6] [i_6])) != (-2359855472550880521LL))))));
            var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)32767))))))))));
        }
        for (int i_7 = 0; i_7 < 10; i_7 += 1) 
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 10; i_8 += 1) 
            {
                for (signed char i_9 = 0; i_9 < 10; i_9 += 1) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */_Bool) ((unsigned char) 3LL));
                            var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) 1261988841U))));
                            var_34 = ((((/* implicit */_Bool) -2LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2359855472550880521LL)) ? (((/* implicit */int) (unsigned short)36715)) : (((/* implicit */int) (short)32367))))) : ((~(7165970055432619713ULL))));
                        }
                    } 
                } 
            } 
            arr_28 [i_4] = ((/* implicit */_Bool) (unsigned short)28816);
            arr_29 [i_7] [i_7] [i_7] = ((/* implicit */int) -2544369080624621121LL);
        }
        var_35 = (((!(((/* implicit */_Bool) (unsigned short)43229)))) ? (((((/* implicit */_Bool) -342498175289589553LL)) ? (((/* implicit */unsigned long long int) 2359855472550880520LL)) : (3617940565180375674ULL))) : (((/* implicit */unsigned long long int) arr_3 [i_4])));
    }
}
