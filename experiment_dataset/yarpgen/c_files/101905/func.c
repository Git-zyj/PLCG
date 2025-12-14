/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101905
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
    var_18 = ((/* implicit */short) var_16);
    var_19 &= ((/* implicit */unsigned short) (~(((((((/* implicit */_Bool) (short)28513)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-28514)))) << (((var_14) - (15823763209902374304ULL)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */short) (-(67108863ULL)));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-28526)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-11616))) : (3545369646U)))) ? (((((/* implicit */_Bool) (short)-28549)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) == (((/* implicit */int) (short)11615))))) : ((((_Bool)0) ? (1001814174) : (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) (short)-28519)) ? ((+(((/* implicit */int) (unsigned short)9)))) : ((-(((/* implicit */int) (_Bool)1))))))));
                        var_21 = ((/* implicit */unsigned char) (((((!(((/* implicit */_Bool) (short)10777)))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (short)28514)) : (((/* implicit */int) (short)0)))))) <= (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (short)-23)))))));
                    }
                    for (unsigned long long int i_4 = 3; i_4 < 13; i_4 += 3) /* same iter space */
                    {
                        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) 8ULL))));
                        var_23 = ((/* implicit */short) ((((((/* implicit */int) (short)1)) ^ (((/* implicit */int) ((1357326760) >= (((/* implicit */int) (short)0))))))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-22380)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (0U)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)10))))) : (0U))) - (4294967267U)))));
                    }
                    for (unsigned long long int i_5 = 3; i_5 < 13; i_5 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 1; i_6 < 10; i_6 += 4) /* same iter space */
                        {
                            arr_23 [i_1] [i_0] = ((/* implicit */signed char) (((+((-(-3253355429573089212LL))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1026519395927407156ULL)) ? (((/* implicit */long long int) 585263042U)) : ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)6424))))) : ((-(4294967295U))))))));
                            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (~(585263049U))))));
                            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1)))))));
                        }
                        for (unsigned short i_7 = 1; i_7 < 10; i_7 += 4) /* same iter space */
                        {
                            var_26 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((607160182) <= (((/* implicit */int) (short)28519)))))));
                            var_27 = ((/* implicit */unsigned char) min((var_27), ((unsigned char)230)));
                            var_28 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) -73143848950893960LL)))) ? ((-(((((/* implicit */int) (unsigned short)51917)) * (((/* implicit */int) (_Bool)0)))))) : (((((/* implicit */_Bool) ((6707242473438210369ULL) & (((/* implicit */unsigned long long int) -73143848950893964LL))))) ? (((/* implicit */int) (unsigned char)217)) : ((((_Bool)0) ? (((/* implicit */int) (signed char)-47)) : (((/* implicit */int) (short)12424))))))));
                            var_29 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((((/* implicit */_Bool) (short)32767)) ? (1348888072) : (((/* implicit */int) (signed char)43)))) != (((-1) & (581927494))))))));
                        }
                        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) (((~(((((/* implicit */_Bool) 3709704253U)) ? (585263061U) : (((/* implicit */unsigned int) 196682846)))))) << (((/* implicit */int) ((((/* implicit */long long int) 585263024U)) > (3253355429573089211LL)))))))));
                    }
                }
            } 
        } 
    } 
}
