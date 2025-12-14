/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174330
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */long long int) (unsigned short)55887);
                    var_11 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) 56670195)) % (17592186028032LL)))) ? (((/* implicit */int) (unsigned char)115)) : (((/* implicit */int) (unsigned short)33426)))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */_Bool) (unsigned char)255);
    /* LoopSeq 4 */
    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
    {
        var_13 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((11252977528687298799ULL), (((/* implicit */unsigned long long int) var_7))))) ? (12681686433659804007ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_7), (((/* implicit */unsigned char) var_3))))))))));
        var_14 = ((/* implicit */long long int) max((((((/* implicit */_Bool) min((17592186028032LL), (((/* implicit */long long int) arr_8 [i_3]))))) ? (7193766545022252817ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_6) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36304))))))))), (((/* implicit */unsigned long long int) (unsigned short)32547))));
        var_15 -= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)28453)) ? (((/* implicit */int) (unsigned short)18573)) : (((/* implicit */int) var_4)))))) | (((((/* implicit */int) (short)31128)) - ((-(((/* implicit */int) (unsigned short)27334))))))));
    }
    for (short i_4 = 0; i_4 < 11; i_4 += 4) 
    {
        var_16 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned short)24428)) ? (((/* implicit */int) (short)32750)) : (((/* implicit */int) arr_3 [(unsigned short)4])))), (((/* implicit */int) min(((short)-32750), (((/* implicit */short) (signed char)-2)))))));
        var_17 ^= ((/* implicit */short) (signed char)4);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 21; i_5 += 4) 
    {
        var_18 = ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) arr_7 [i_5] [i_5])) : (((/* implicit */int) (short)31110))))) ? (((/* implicit */int) (unsigned short)29231)) : (((/* implicit */int) var_1)));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */int) var_4)) / (((/* implicit */int) var_4))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)29544)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-23))) : (-5901302568393507670LL)));
    }
    for (unsigned char i_6 = 2; i_6 < 17; i_6 += 1) 
    {
        var_21 = max((13692377847610957074ULL), (((/* implicit */unsigned long long int) (unsigned char)107)));
        arr_18 [i_6] = ((/* implicit */unsigned int) var_9);
    }
}
