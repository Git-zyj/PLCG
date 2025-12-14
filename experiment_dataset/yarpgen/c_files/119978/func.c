/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119978
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (int i_2 = 3; i_2 < 11; i_2 += 3) 
            {
                var_17 -= ((/* implicit */unsigned int) (+((~(((/* implicit */int) var_2))))));
                /* LoopSeq 1 */
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) var_1))));
                    var_19 = ((/* implicit */short) 536870656U);
                    arr_11 [i_3] = var_10;
                }
            }
            var_20 -= ((/* implicit */unsigned short) ((((arr_5 [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49525))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57740)))));
            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) 10252043585023143251ULL))));
            arr_12 [i_0] [i_1] [i_1] &= ((/* implicit */unsigned short) ((_Bool) var_6));
        }
        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            arr_15 [i_0] [i_4] = ((((/* implicit */_Bool) (-(((arr_5 [i_0]) >> (((10252043585023143227ULL) - (10252043585023143188ULL)))))))) ? (-284830369) : (((((1364624578) - (arr_1 [i_0]))) | (((/* implicit */int) ((short) 10252043585023143251ULL))))));
            var_22 = ((/* implicit */signed char) (!((_Bool)1)));
            var_23 = ((/* implicit */unsigned long long int) (-(((int) (_Bool)1))));
        }
        for (int i_5 = 1; i_5 < 10; i_5 += 2) 
        {
            var_24 = ((((((/* implicit */unsigned int) ((/* implicit */int) ((var_15) == (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))) / (((unsigned int) var_7)))) << (((((((/* implicit */_Bool) ((var_16) * (((/* implicit */unsigned long long int) -4583614558468105867LL))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))) : (max((arr_19 [i_0]), (((/* implicit */unsigned int) (_Bool)0)))))) - (4294950616U))));
            var_25 = ((/* implicit */int) ((unsigned long long int) ((arr_3 [i_0] [i_0]) > (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))))))));
        }
        arr_20 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_3);
        arr_21 [i_0] = ((/* implicit */long long int) (((((~(var_13))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)47))))) != (((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0]))))) + ((-(9087103313498356783ULL)))))));
    }
    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 12; i_7 += 3) 
        {
            for (int i_8 = 1; i_8 < 10; i_8 += 1) 
            {
                {
                    var_26 = ((/* implicit */_Bool) (+(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)10725))) - (var_4)))));
                    arr_28 [i_6] [0] [i_8] |= ((/* implicit */unsigned char) var_14);
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 12; i_9 += 1) 
        {
            for (int i_10 = 0; i_10 < 12; i_10 += 2) 
            {
                {
                    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) ((10252043585023143251ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_6] [i_6] [i_6]))))))) - (((/* implicit */int) var_10))));
                    var_28 *= ((/* implicit */signed char) (+(arr_19 [i_10])));
                    var_29 = ((/* implicit */_Bool) arr_10 [i_6] [i_10] [i_9] [i_10] [i_10]);
                    var_30 ^= ((/* implicit */unsigned short) ((10252043585023143264ULL) >> ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
                    var_31 = ((/* implicit */unsigned int) var_16);
                }
            } 
        } 
    }
    for (signed char i_11 = 2; i_11 < 18; i_11 += 2) 
    {
        var_32 = ((/* implicit */short) ((_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_11]))) + (arr_36 [i_11] [i_11]))) - (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (var_12)))))));
        arr_38 [i_11] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (signed char)-111))))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_11])))))))));
        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) (((~(min((((/* implicit */unsigned long long int) var_12)), (arr_36 [i_11] [i_11]))))) | (((/* implicit */unsigned long long int) (~(((4033232402U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))))))));
        var_34 *= ((/* implicit */unsigned char) min((((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) < (((int) (signed char)49))))), ((signed char)-21)));
    }
    var_35 |= ((/* implicit */unsigned char) (~(10252043585023143269ULL)));
    var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) ((unsigned long long int) var_6)))) ? ((~(((/* implicit */int) (short)-19680)))) : (((/* implicit */int) var_3))));
}
