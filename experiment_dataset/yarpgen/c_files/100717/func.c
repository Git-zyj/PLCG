/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100717
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = (~((-(13119188139279306412ULL))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            var_11 = ((/* implicit */unsigned char) ((var_8) | (((long long int) var_6))));
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    {
                        var_12 = ((/* implicit */_Bool) ((int) 5327555934430245213ULL));
                        arr_11 [i_0] [i_0] [i_1] [(_Bool)1] [i_3] = ((/* implicit */long long int) (-((+(var_3)))));
                        arr_12 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((int) var_10))))) != ((~(13119188139279306402ULL)))));
                        arr_13 [i_3] [i_3] [(_Bool)1] [8ULL] [i_0] = ((/* implicit */short) var_2);
                    }
                } 
            } 
            arr_14 [i_0] [i_1] = ((/* implicit */int) ((short) ((((unsigned int) 6211739182005559082LL)) * (((/* implicit */unsigned int) (+(((/* implicit */int) var_4))))))));
            arr_15 [i_0] [i_1] [i_1] = ((5327555934430245197ULL) & (((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (short)25424)))) & (var_0))));
        }
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 16; i_4 += 4) /* same iter space */
    {
        var_13 -= ((/* implicit */unsigned long long int) ((((13119188139279306412ULL) < (13119188139279306403ULL))) || (((((/* implicit */long long int) ((/* implicit */int) var_6))) == (-6211739182005559052LL)))));
        /* LoopSeq 1 */
        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 3) 
        {
            arr_23 [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) 5327555934430245217ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1653))) : (13119188139279306404ULL)));
            arr_24 [5U] [i_5] = ((/* implicit */unsigned long long int) (-(var_8)));
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 2) 
            {
                for (unsigned int i_7 = 0; i_7 < 16; i_7 += 4) 
                {
                    {
                        var_14 = ((/* implicit */long long int) (-(var_0)));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 2) 
                        {
                            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) -1943894686)) || (((/* implicit */_Bool) 13119188139279306402ULL))));
                            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (((~(5327555934430245214ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
                        }
                    }
                } 
            } 
            arr_33 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) var_4)))))));
        }
        arr_34 [i_4] = ((((unsigned long long int) (_Bool)0)) >> (((unsigned int) (_Bool)1)));
    }
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (~(-6211739182005559052LL))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((unsigned char) 13119188139279306399ULL)))));
}
