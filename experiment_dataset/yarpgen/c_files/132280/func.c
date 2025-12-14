/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132280
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (long long int i_3 = 3; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_14 *= ((/* implicit */unsigned short) (((-(-2017680005))) / (((/* implicit */int) ((unsigned char) -2798148372384916356LL)))));
                            var_15 = ((/* implicit */int) max((var_15), ((((~(((/* implicit */int) (unsigned short)15222)))) - (((((/* implicit */int) (short)1061)) % (((/* implicit */int) (unsigned short)50314))))))));
                            var_16 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)0))))) ? ((~(((/* implicit */int) (signed char)5)))) : (((/* implicit */int) ((0LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))))));
                            arr_11 [i_0] [i_0] [i_0] [i_0] [6U] &= ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) ((33488896) / (((/* implicit */int) (unsigned short)50313)))))) > ((-(((((/* implicit */int) (unsigned char)151)) + (((/* implicit */int) (_Bool)0))))))));
                        }
                    } 
                } 
                var_17 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)30)) + (((/* implicit */int) (signed char)4)))) + ((-(((/* implicit */int) (unsigned short)15222))))))) ? ((-(((((/* implicit */_Bool) 4294443008U)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)151))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 0U))))));
            }
        } 
    } 
    var_18 -= ((/* implicit */unsigned char) ((min((((/* implicit */int) min(((unsigned short)50314), (((/* implicit */unsigned short) (_Bool)0))))), (((((/* implicit */_Bool) (unsigned short)50314)) ? (((/* implicit */int) (unsigned short)57344)) : (370433738))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-1))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)50314))) >= (190172338376245164LL)))) : (((/* implicit */int) ((((/* implicit */int) (signed char)-9)) <= (((/* implicit */int) (unsigned char)75)))))))));
}
