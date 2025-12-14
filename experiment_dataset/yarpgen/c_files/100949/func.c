/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100949
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((-(((/* implicit */int) (signed char)96)))) ^ (((/* implicit */int) (signed char)-100))))) ? (((/* implicit */int) (((~(((/* implicit */int) (_Bool)1)))) < ((-(((/* implicit */int) (short)9841))))))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) 7675562147550450389ULL))))) == (((/* implicit */int) var_3)))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 3) /* same iter space */
    {
        var_11 = ((/* implicit */signed char) (((-(min((((/* implicit */int) (unsigned char)28)), (arr_0 [i_0] [i_0]))))) != (((/* implicit */int) (((!(((/* implicit */_Bool) (signed char)100)))) || (((/* implicit */_Bool) 14298373422221744287ULL)))))));
        var_12 = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)76))));
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (arr_1 [i_0 + 1])))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)93)), (4148370651487807315ULL))))));
    }
    for (unsigned int i_1 = 2; i_1 < 8; i_1 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 2; i_2 < 7; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        var_14 = ((/* implicit */short) ((((((/* implicit */_Bool) (-(-3816829417391652367LL)))) ? ((-(((/* implicit */int) (unsigned char)60)))) : (((/* implicit */int) ((unsigned char) (unsigned short)26440))))) - ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                        var_15 = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_3 [i_1 - 2]))))));
                    }
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((+(var_1)))))) ? (15497757036615564319ULL) : (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (_Bool)1))))))))))));
                    arr_13 [i_3] = ((/* implicit */signed char) (~(min(((~(((/* implicit */int) (unsigned short)9943)))), ((~(((/* implicit */int) arr_2 [i_1]))))))));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned char) 3521657013138772415LL);
    }
    for (unsigned long long int i_5 = 2; i_5 < 22; i_5 += 4) 
    {
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)4088)) ? (((/* implicit */int) arr_16 [i_5 - 1])) : (((/* implicit */int) arr_16 [i_5 + 2])))) + (((((/* implicit */_Bool) arr_16 [i_5 - 1])) ? (((/* implicit */int) arr_16 [i_5 - 2])) : (((/* implicit */int) arr_16 [i_5 + 2])))))))));
        var_19 += ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) 505075567463465727LL))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
    {
        var_20 *= (+(arr_18 [(short)4]));
        var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-118))));
    }
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
    {
        arr_24 [i_7] = ((/* implicit */_Bool) min((352589634), ((~(((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))));
        arr_25 [i_7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */int) arr_23 [i_7 - 1] [i_7])) : (((/* implicit */int) arr_23 [i_7 - 1] [i_7]))))) ? (((/* implicit */int) arr_14 [i_7])) : (((/* implicit */int) (_Bool)0)));
        var_22 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (_Bool)0))))));
    }
    var_23 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_6)))) - ((+((-(((/* implicit */int) (_Bool)1))))))));
    var_24 *= ((/* implicit */int) var_0);
}
