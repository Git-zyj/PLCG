/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168388
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned int) (unsigned char)155))), (((long long int) 8759420650163631223LL))))) || (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)94)) || (((/* implicit */_Bool) -9))))))))));
                arr_6 [0LL] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)172))))) || (((/* implicit */_Bool) (~(9011170684396363453LL)))))))));
                arr_7 [i_1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)123)) || (((/* implicit */_Bool) 4294967295LL))))))))));
                arr_8 [i_1] &= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)148)) || (((((/* implicit */_Bool) (signed char)54)) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)116)) ^ (((/* implicit */int) (_Bool)0)))))))));
            }
        } 
    } 
    var_11 = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)230)), (8070450532247928832LL)))) || (((/* implicit */_Bool) (~(((/* implicit */int) (short)7077))))))) || (((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) 5770886839650098944LL))) / ((-(((/* implicit */int) (unsigned char)115)))))))));
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        for (unsigned short i_3 = 1; i_3 < 15; i_3 += 4) 
        {
            for (int i_4 = 3; i_4 < 14; i_4 += 3) 
            {
                {
                    var_12 *= ((/* implicit */unsigned int) ((int) (unsigned char)31));
                    var_13 = (~(((((((/* implicit */_Bool) 4200508185160715382ULL)) || (((/* implicit */_Bool) (unsigned char)100)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((unsigned int) (unsigned char)228)))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) ((unsigned char) (_Bool)1));
    var_15 = ((((_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)108))) / (-7179460422176018885LL)))) ? ((+(((((/* implicit */long long int) -4)) / (-3371534018830718093LL))))) : (((/* implicit */long long int) -1)));
}
